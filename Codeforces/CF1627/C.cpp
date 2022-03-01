#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> deg(n + 1, 0);
	vector<vector<int>> adj(n + 1);
	vector<pair<int, int>> v(n - 1);
	bool OK = true;
	for (int i = 0; i < n - 1; i++) {
		cin >> v[i].first >> v[i].second;
		deg[v[i].first]++;
		deg[v[i].second]++;
		if (deg[v[i].first] == 3 || deg[v[i].second] == 3) {
			OK = false;
		}
		adj[v[i].first].emplace_back(v[i].second);
		adj[v[i].second].emplace_back(v[i].first);
	}
	if (!OK) {
		cout << -1 << '\n';
		return;
	}
	queue<int> s;
	int beg;
	for (int i = 1; i <= n; i++) {
		if (adj[i].size() == 1) {
			beg = i;
			break;
		}
	}
	s.push(beg);
	vector<bool> visited(n + 1, false);
	vector<int> distance(n + 1);
	visited[beg] = 2;
	distance[beg] = 0;
	while (!s.empty()) {
		int p = s.front();
		s.pop();
		for (auto t : adj[p]) {
			if (visited[t]) {
				continue;
			}
			visited[t] = true;
			distance[t] = distance[p] + 1;
			s.push(t);
		}
	}
//	cout << beg << '\n';
	for (int i = 0; i < n - 1; i++) {
		int t = min(distance[v[i].first], distance[v[i].second]);
//		cout << t << " ";
		if (t & 1) {
			cout << 2 << " ";
		}
		else {
			cout << 3 << " ";
		}
	}
	cout << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
