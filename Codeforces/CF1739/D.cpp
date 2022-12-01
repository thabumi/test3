#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> adj(n + 1);
	
	for (int i = 2; i <= n; i++) {
		int x;
		cin >> x;
		adj[i].push_back(x);
		adj[x].push_back(i);
	}
	
	int dist[n + 1];
	bool visited[n + 1];
	memset(visited, false, sizeof(visited));
	dist[1] = 0;
	visited[1] = true;
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int t = q.front();
		q.pop();
		for (auto g : adj[t]) {
			if (!visited[g]) {
				q.push(g);
				visited[g] = true;
				dist[g] = dist[t] + 1;
			}
		}
	}
	priority_queue<int> pq;
	for (int i = 2; i <= n; i++) {
		if (adj[i].size() == 1) {
			pq.push(dist[i]);
		}
	}
	for (int i = 1; i <= k; i++) {
		int t = pq.top();
		pq.pop();
		pq.push(t / 2);
		pq.push(t - t / 2);
	}
	cout << pq.top() << '\n';
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
