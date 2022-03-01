#include <bits/stdc++.h>
 
using namespace std;

long long INF = 1e15;

void run_case() {
	int n, m;
	cin >> n >> m;
	vector<pair<long long, long long>> adj[n + 1];
	vector<pair<long long, long long>> invadj[n + 1];
	for (int i = 0; i < m; i++) {
		long long x, y;
		long long w;
		cin >> x >> y >> w;
		adj[x].emplace_back(make_pair(y, w));
		invadj[y].emplace_back(make_pair(x, w));
	}
	vector<long long> dis(n + 1, INF);
	vector<long long> invdis(n + 1, INF);
	vector<bool> processed(n + 1, false);
	dis[1] = 0;
	priority_queue<pair<long long, long long>> q;
	q.push({0, 1});
	while (!q.empty()) {
		int a = q.top().second;
		q.pop();
		if (processed[a]) {
			continue;
		}
		processed[a] = true;
		for (auto u : adj[a]) {
			long long b = u.first;
			long long w = u.second;
			if (dis[a] + w < dis[b]) {
				dis[b] = dis[a] + w;
				q.push({-dis[b], b});
			}
		}
	}
	processed.assign(n + 1, false);
	invdis[1] = 0;
	q.push({0, 1});
	while (!q.empty()) {
		int a = q.top().second;
//		cout << a << " ";
		q.pop();
		if (processed[a]) {
			continue;
		}
		processed[a] = true;
		for (auto u : invadj[a]) {
			long long b = u.first;
			long long w = u.second;
			if (invdis[a] + w < invdis[b]) {
				invdis[b] = invdis[a] + w;
				q.push({-invdis[b], b});
			}
		}
	}
	for (int i = 2; i <= n; i++) {
//		cout << dis[i] << " " << invdis[i] << '\n';
		if (dis[i] == INF || invdis[i] == INF) {
			cout << -1 << '\n';
			continue;
		}
		cout << dis[i] + invdis[i] << '\n';
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
