#include <bits/stdc++.h>
 
using namespace std;
const int INF = 1e9 + 1;
vector<vector<int>> pos;
vector<vector<int>> adj;
vector<bool> sure;
map<pair<int, int>, pair<int, int>> mp;
vector<bool> visited;
bool OK;
void dfs(int u) {
	for (auto t : adj[u]) {
		if (sure[t]) {
			continue;
		}
		pair<int, int> p = mp[{u, t}];
//		cout << u << " " << t << " " << p.first << " " << p.second << '\n';
		pos[t] = vector<int>(1, p.first + p.second - pos[u][0]);
		sure[t] = true;
		dfs(t);
	}
}
void dfs2(int u) {
	for (auto t : adj[u]) {
		pair<int, int> p = mp[{u, t}];
		if ((pos[u][0] == p.first && pos[t][0] == p.second) || (pos[t][0] == p.first && pos[u][0] == p.second)) {
			
		}
		else {
			OK = false;
		}
		if (visited[t]) {
			continue;
		}
		else {
			visited[t] = true;
			dfs2(t);
		}
	}
}
void run_case() {
	OK = true;
	int n, m;
	cin >> n >> m;
	vector<int> def(1, INF);
	pos.assign(n, vector<int>(1, INF));
	sure.assign(n, false);
	adj.assign(n, vector<int>());
	visited.assign(n, false);
	
	for (int i = 0; i < m; i++) {
		int u, v, x, y;
		cin >> u >> v >> x >> y;
		u--;
		v--;
		mp[{u, v}] = {x, y};
		mp[{v, u}] = {x, y};
		adj[u].push_back(v);
		adj[v].push_back(u);
		if (pos[u] == def){
			pos[u] = {x, y};
			if (x == y) {
				pos[u].pop_back();
			}
		}
		else {
			if (pos[u].size() == 0) {
				cout << -1 << '\n';
				return;
			}
			else if (pos[u].size() == 1) {
				if (pos[u][0] != x && pos[u][0] != y) {
					cout << -1 << '\n';
					return;
				}
				else if (pos[u][0] == x) {
					pos[v] = vector<int>(1, y);
					sure[u] = 1;
					sure[v] = 1;
				}
				else {
					pos[v] = vector<int>(1, x);
					sure[u] = 1;
					sure[v] = 1;
				}
			}
			else {
				vector<int> k;
				if (pos[u][0] == x || pos[u][0] == y) {
					k.push_back(pos[u][0]);
				}
				if (pos[u][1] == x || pos[u][1] == y) {
					k.push_back(pos[u][1]);
				}
				if (k.size() == 2 && k[0] == k[1]) {
					k.pop_back();
				}
				pos[u] = k;
				if (pos[u].size() == 0) {
					cout << -1 << '\n';
					return;
				}
				else if (pos[u].size() == 1) {
					sure[u] = 1;
					sure[v] = 1;
					pos[v] = vector<int>(1, x + y - pos[u].back());
				}
			}
		}
		if (pos[v] == def){
			pos[v] = {x, y};
			if (x == y) {
				pos[v].pop_back();
			}
		}
		else {
			if (pos[v].size() == 0) {
				cout << -1 << '\n';
				return;
			}
			else if (pos[v].size() == 1) {
				if (pos[v][0] != x && pos[v][0] != y) {
					cout << -1 << '\n';
					return;
				}
				else if (pos[v][0] == x) {
					pos[u] = vector<int>(1, y);
					sure[u] = 1;
					sure[v] = 1;
				}
				else {
					pos[u] = vector<int>(1, x);
					sure[u] = 1;
					sure[v] = 1;
				}
			}
			else {
				vector<int> k;
				if (pos[v][0] == x || pos[v][0] == y) {
					k.push_back(pos[u][0]);
				}
				if (pos[v][1] == x || pos[v][1] == y) {
					k.push_back(pos[v][1]);
				}
				if (k.size() == 2 && k[0] == k[1]) {
					k.pop_back();
				}
				pos[v] = k;
				if (pos[v].size() == 0) {
					cout << -1 << '\n';
					return;
				}
				else if (pos[v].size() == 1) {
					sure[u] = 1;
					sure[v] = 1;
					pos[u] = vector<int>(1, x + y - pos[v].back());
				}
			}
		}
	}
//	return;
	for (int i = 0; i < n; i++) {
		if (pos[i].size() == 0) {
			cout << -1 << '\n';
			return;
		}
		if (sure[i]) {
			dfs(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (!sure[i]) {
			sure[i] = 1;
			pos[i] = vector<int>(1, pos[i][0]);
			dfs(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			dfs2(i);
		}
	}
	if (!OK) {
		cout << -1 << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (sure[i] && pos[i][0] != INF) {
			cout << pos[i][0] << " ";
		}
		else {
			cout << INF - 1 << " ";
		}
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
