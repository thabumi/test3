#include <bits/stdc++.h>
 
using namespace std;
#define int long long
struct Point {
	int x, y;
	Point(int x, int y): x(x), y(y) {
		
	}
	bool operator < (const Point& p) const {
		return make_pair(x, y) < make_pair(p.x, p.y);
	}
	bool operator != (const Point& p) const {
		return make_pair(x, y) != make_pair(p.x, p.y);
	}
};

int ccw(Point p1, Point p2, Point p3) {
	return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}

vector<Point> convexHull(vector<Point> pts) {
	vector<Point> u, l;
	sort(pts.begin(), pts.end());
	
	for (int i = 0; i < pts.size(); i++) {
		int j = l.size();
		while (j >= 2 && ccw(l[j - 2], l[j - 1], pts[i]) <= 0) {
			l.erase(l.end() - 1);
			j = l.size();
		}
		l.push_back(pts[i]);
	}
	for (int i = pts.size() - 1; i >= 0; i--) {
		int j = u.size();
		while (j >= 2 && ccw(u[j - 2], u[j - 1], pts[i]) <= 0) {
			u.erase(u.end() - 1);
			j = u.size();
		}
		u.push_back(pts[i]);
	}
	u.erase(u.end() - 1);
	l.erase(l.end() - 1);
	l.reserve(l.size() + u.size());
	l.insert(l.end(), u.begin(), u.end());
	return l;
}

void run_case() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector<Point> v;
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			v.push_back(Point(x, y));
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int l = k + 1; l < n; l++) {
						vector<Point> t = {v[i], v[j], v[k], v[l]};
						vector<Point> r = convexHull(t);
						sort(t.begin(), t.end());
						sort(r.begin(), r.end());
						bool b = true;
						for (int i = 0; i < 4; i++) {
							if (t[i] != r[i]) {
								b = false;
								break;
							}
						}
						if (b) {
							cnt++;
						}
					}
				}
			}
		} 
		cout << cnt << '\n';
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
