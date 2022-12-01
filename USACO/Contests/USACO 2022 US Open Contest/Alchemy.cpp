#include <bits/stdc++.h>
 
using namespace std;

vector<long long> a;
//vector<long long> b;
vector<vector<int>> adj;

bool dfs(int n, long long target) {
	if (adj[n].size() == 0 && a[n] < target) {
		return false;
	}
	bool ok = true;
	for (auto t : adj[n]) {
		ok &= dfs(t, target - a[n]);
	}
	return ok;
}

void run_case() {
	int n;
	cin >> n;
//	long long a[n + 5];
	a.resize(105);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	adj.assign(105, vector<int>());
//	b = a;
//	vector<int> adj[n + 5];
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int x, m;
		cin >> x >> m;
		for (int i = 0; i < m; i++) {
			int y;
			cin >> y;
			adj[x].emplace_back(y);
		}
	}
	long long l = 0;
	long long r = 1e7;
	while (l < r) {
		long long mid = (l + r + 1) / 2;
		bool ok = dfs(n, mid);
		if (ok) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
		run_case();
	}
	return 0;	
}