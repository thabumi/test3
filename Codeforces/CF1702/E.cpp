#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> adj[n + 1];
	vector<int> cnt(n + 1);
	bool soBad = false;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x == y) {
			soBad = true;
		}
		cnt[x]++;
		cnt[y]++;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		if (cnt[i] != 2) {
			cout << "NO\n";
			return;
		}
	}
	if (soBad) {
		cout << "NO\n";
		return;
	}
	vector<bool> visited(n + 1, false);
	for (int i = 1; i <= n; i++) {
		if (adj[i][0] == adj[i][1]) {
			visited[i] = true;
		}
	}
	vector<int> dist(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dist[i] = 0;
			queue<int> q;
			q.push(i);
			while (!q.empty()) {
				int t = q.front();
				q.pop();
				int next1 = adj[t][0];
				int next2 = adj[t][1];
				if (!visited[next1]) {
					dist[next1] = dist[t] + 1;
					visited[next1] = true;
					q.push(next1);
				}
				else if (!visited[next2]) {
					dist[next2] = dist[t] + 1;
					visited[next2] = true;
					q.push(next2);
				}
				else {
					if (dist[t] % 2 == 0) {
						cout << "NO\n";
						return;
					}
				}
			}
		}
	}
	cout << "YES\n";
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
