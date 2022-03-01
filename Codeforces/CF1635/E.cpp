#include <bits/stdc++.h>
 
using namespace std;

vector<pair<int, int>> adj[200005];
vector<int> adj2[200005];
vector<bool> visited(200005, false);
vector<int> cl(200005, -1);
bool OK;
void dfs(int i) {
	visited[i] = true;
	if (cl[i] == -1) {
		cl[i] = 0;
	}
	for (auto t : adj[i]) {
		if (visited[t.first]) {
			if (cl[t.first] == cl[i]) {
				OK = false;
			}
		}
		else {
			cl[t.first] = 1 - cl[i];
			visited[t.first] = true;
			dfs(t.first);
		}
	}
}

void run_case() {
	int n, m;
	cin >> n >> m;
	OK = true;
	for (int i = 0; i < m; i++) {
		int typ, x, y;
		cin >> typ >> x >> y;
		--x;
		--y;
		adj[x].emplace_back(make_pair(y, typ));
		adj[y].emplace_back(make_pair(x, typ));
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			dfs(i);
		}
	}
	if (!OK) {
		cout << "NO";
		return;
	}
	
//	vector<pair<char, long long>> res(n);
	//0 -> L, 1 -> R
	vector<int> deg(n + 5, 0);
	for (int i = 0; i < n; i++) {
		if (cl[i] == 0) {
			for (auto t : adj[i]) {
				if (t.first < i) {
					continue;
				}
				if (t.second == 1) {
					adj2[i].emplace_back(t.first);
					deg[t.first]++;
				}
				else {
					adj2[t.first].emplace_back(i);
					deg[i]++;
				}
			}
		}
		else {
			for (auto t : adj[i]) {
				if (t.first < i) {
					continue;
				}
				if (t.second == 2) {
					adj2[i].emplace_back(t.first);
					deg[t.first]++;
				}
				else {
					adj2[t.first].emplace_back(i);
					deg[i]++;
				}
			}
		}
	}
//	for (int i = 0; i < n; i++) {
//		for (int v : adj2[i]) {
//			cout << v << " ";
//		}
//		cout << '\n';
//	}
//	return;
	vector<int> res;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		if (deg[i] == 0) {
			q.push(i);
		}
	}
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		res.push_back(u);
		for (int v : adj2[u]) {
			deg[v]--;
			if (deg[v] == 0) {
				q.push(v);
			}
		}
	}
	if (res.size() < n) {
		cout << "NO";
		return;
	}
	cout << "YES\n";
//	reverse(res.begin(), res.end());
	
//	for (int i = 0; i < n; i++) {
//		cout << cl[i] << " ";
//	}
//	cout << '\n';
	vector<int> res2(n + 5);
	for (int i = 0; i < n; i++) {
		res2[res[i]] = i;
	}
	for (int i = 0; i < n; i++) {
//		if (i == 92733 || i == 60628) {
		if (cl[i] == 0) {
			cout << "L ";
		}
		else {
			cout << "R ";
		}
		cout << res2[i] << '\n';
//		}
		
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
