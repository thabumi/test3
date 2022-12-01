#include <bits/stdc++.h>
 
using namespace std;

int DRow[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int DCol[] = {-1, -1, -1, 0, 0, 1, 1, 1};

void run_case() {
	int x0, y0, x1, y1;
	cin >> x0 >> y0 >> x1 >> y1;
	map<pair<int, int>, bool> pnt;
	map<pair<int, int>, int> visited;
	map<pair<int, int>, int> dis;
	dis[{x1, y1}] = 2e9 + 5;
	int n;
	cin >> n;
	map<int, set<pair<int, int>>> m;
	for (int i = 0; i < n; i++) {
		int r, a, b;
		cin >> r >> a >> b;
		m[r].insert({a, b});
	}
	for (auto t : m) {
		set<pair<int, int>> s = t.second;
		auto it = s.begin();
		for (int i = s.begin()->first; i <= s.begin()->second; i++) {
			pnt[{t.first, i}] = 1;
		}
		auto it2 = s.begin();
		it2++;
		while (it2 != s.end()) {
			for (int i = max(it2->first, it->second); i <= it2->second; i++) {
				pnt[{t.first, i}] = 1;
			}
			it = it2;
			it2++;
		}
//		for (auto it = s.begin(); it != s.end();)
	}
//	for (auto t : pnt) {
//		cout << t.first.first << " " << t.first.second << '\n';
//	}
	queue<pair<int, int>> q;
	q.push({x0, y0});
	visited[{x0, y0}] = 1;
	dis[{x0, y0}] = 0;
	while (!q.empty()) {
		pair<int, int> t = q.front();
		q.pop();
		for (int i = 0; i < 8; i++) {
			int x = t.first + DRow[i];
			int y = t.second + DCol[i];
			if (visited[{x, y}] || !pnt[{x, y}]) {
				continue;
			}
			else {
				visited[{x, y}]++;
				q.push({x, y});
				dis[{x, y}] = dis[t] + 1;
//				if (dis[{x, y}] == 0) {
//					dis[{x, y}] = dis[t] + 1;
//				} 
//				else {
//					dis[{x, y}] = min(dis[{x, y}], dis[t] + 1);	
//				}
				
			}
		}
	}
	if (dis[{x1, y1}] > 1e6) {
		cout << -1;
	} 
	else {
		cout << dis[{x1, y1}];
	}
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
