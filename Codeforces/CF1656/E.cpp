#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> adj[n + 5];
	vector<int> deg(n + 5, 0);
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].emplace_back(y);
		adj[y].emplace_back(x);
		++deg[x];
		++deg[y];
	}
	vector<bool> visited(n + 5, 0);
	vector<int> cl(n + 5, 0);
	visited[1] = 1;
	cl[1] = 1;
	stack<int> s;
	s.push(1);
	while (!s.empty()) {
		int t = s.top();
		s.pop();
		for (auto g : adj[t]) {
			if (visited[g]) {
				continue;
			}
			visited[g] = true;
			cl[g] = 0 - cl[t];
			s.push(g);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << deg[i] * cl[i] << " ";
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
