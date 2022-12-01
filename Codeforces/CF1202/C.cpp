
#include <bits/stdc++.h>

using namespace std;

void run_case() {
	map<char, pair<int, int>> m;
	char ctrl[] = {'D', 'S', 'A', 'W'};
	m['D'] = {1, 0};
	m['S'] = {0, -1};
	m['A'] = {-1, 0};
	m['W'] = {0, 1};
	string s;
	cin >> s;
	int n = s.size();
	vector<pair<int, int>> v(n + 1);
	v[0] = {0, 0};
	for (int i = 0; i < n; i++) {
		v[i + 1] = {v[i].first + m[s[i]].first, v[i].second + m[s[i]].second};
	}
	pair<int, int> rangeX[n + 5];
	pair<int, int> rangeY[n + 5];
	pair<int, int> invrangeX[n + 5];
	pair<int, int> invrangeY[n + 5];
	rangeX[0] = {v[0].first, v[0].first};
	rangeY[0] = {v[0].second, v[0].second};
	for (int i = 1; i <= n; i++) {
		rangeX[i] = {min(rangeX[i - 1].first, v[i].first), max(rangeX[i - 1].second, v[i].first)};
		rangeY[i] = {min(rangeY[i - 1].first, v[i].second), max(rangeY[i - 1].second, v[i].second)};
	}
	invrangeX[n] = {v[n].first, v[n].first};
	invrangeY[n] = {v[n].second, v[n].second};
	for (int i = n - 1; i >= 0; i--) {
		invrangeX[i] = {min(invrangeX[i + 1].first, v[i].first), max(invrangeX[i + 1].second, v[i].first)};
		invrangeY[i] = {min(invrangeY[i + 1].first, v[i].second), max(invrangeY[i + 1].second, v[i].second)};
	}
	long long res = 1LL * (rangeX[n].second - rangeX[n].first + 1) * (rangeY[n].second - rangeY[n].first + 1);
//	cout << res << '\n';
	for (int i = 0; i < n; i++) {//insert 1 step after ith move
		
		for (int j = 0; j < 4; j++) {
			int ctrlX = m[ctrl[j]].first;
			int ctrlY = m[ctrl[j]].second;
			
			int newX = v[i].first + ctrlX;
			int newY = v[i].second + ctrlY;
			long long minX = min({rangeX[i].first, newX , invrangeX[i + 1].first + m[ctrl[j]].first});
			long long maxX = max({rangeX[i].second, newX, invrangeX[i + 1].second + m[ctrl[j]].first});
			long long minY = min({rangeY[i].first, newY, invrangeY[i + 1].first + m[ctrl[j]].second});
			long long maxY = max({rangeY[i].second, newY, invrangeY[i + 1].second + m[ctrl[j]].second});
			res = min(res, (maxX - minX + 1) * (maxY - minY + 1));
//			if (res == 1) {
//				cout << i << " " << ctrl[j];
//				return;
//			}	
		} 
	}
	cout << res << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
