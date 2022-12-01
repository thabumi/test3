#include <bits/stdc++.h>
 
using namespace std;

vector<int> adj[(int)1e5 + 1];
int res[(int)1e5 + 1];
bool visited[(int)1e5 + 1];
void dfs(int t) {
	if (visited[t]) {
		return;
	}
	visited[t] = true;
	if (adj[t].size() == 0) {
		res[t] = 0;
		return;
	}
	for (auto g : adj[t]) {
		dfs(g);
		res[t] = max(res[t], res[g] + 1);
	}
}

void run_case() {
	int n, m;
	cin >> n >> m;
	
	vector<int> deg(1e5 + 1, 0);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		--x;
		--y;
		adj[x].emplace_back(y);
		deg[y]++;
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			dfs(i);
		}
	}
//	return;
	int mx = res[0];
	for (int i = 0; i < n; i++) {
//		cout << res[i] << " ";
		mx = max(mx, res[i]);
	}
//	cout << '\n';
	cout << mx;
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
