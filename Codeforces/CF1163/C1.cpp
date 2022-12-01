#include <bits/stdc++.h>
 
using namespace std;

struct Point {
	int x;
	int y;
};

struct Line {
	int a;
	int b;
	int c;
	Line() {
		
	}
	Line(int _a, int _b, int _c) {
		a = _a;
		b = _b;
		c = _c;
	}
};

Line line(Point u, Point v) {
	int a = v.y - u.y;
	int b = u.x - v.x;
	int c = v.x * u.y - u.x * v.y;
	int d = __gcd(abs(a), __gcd(abs(b), abs(c)));
	if (d != 0) {
		a /= d;
		b /= d;
		c /= d;
	}
	if (a < 0) {
		a = -a;
		b = -b;
		c = -c;
	}
	else if (a == 0) {
		if (b < 0) {
			b = -b;
			c = -c;
		}
	}
	return Line(a, b, c);
}

bool operator < (Line l1, Line l2) {
	if (l1.a != l2.a) {
		return l1.a < l2.a;
	}
	else {
		if (l1.b != l2.b) {
			return l1.b < l2.b;
		}
		
		else {
			if (l1.c != l2.c) {
				return l1.c < l2.c;
			}
			else {
				return false;
			}
		}
	}
}
//bool operator == (Line l1, Line l2) {
//	return (l1.a == l2.a && l1.b == l2.b && l1.c == l2.c);
//}

void run_case() {
	int n;
	cin >> n;
	vector<Point> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].x >> v[i].y;
	}
//	multiset<Line> s;
	set<Line> s;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
//			m[line(v[i], v[j])]++;
			s.insert(line(v[i], v[j]));
		}
	}
//	for (auto ln : s) {
//		cout << ln.a << " " << ln.b << " " << ln.c << '\n';
//	}
//	return;
	vector<Line> t;
	for (auto ln : s) {
		t.push_back(ln);
	}
//	for (auto ln : m) {
//		t.push_back(ln.first);
//	}
//	cout << t.size() << '\n';
	int res = 0;
	for (int i = 0; i < t.size(); i++) {
		for (int j = i + 1; j < t.size(); j++) {
			if (t[i].a == t[j].a && t[i].b == t[j].b) {
				continue;
			}
			res++;
		}
	}
	cout << res;
}

int main() {
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
