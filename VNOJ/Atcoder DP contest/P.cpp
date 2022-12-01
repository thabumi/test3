#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long b[(int)1e5 + 5];
long long w[(int)1e5 + 5];
vector<int> adj[(int)1e5 + 5];
long long res;

void dfs(int v, int p) {
	long long B = 1;
	long long W = 1;
	for (auto c : adj[v]) {
		if (c == p) {
			continue;
		}
		dfs(c, v);
		B = B * b[c] % MOD;
		W = W * w[c] % MOD;
	}
	b[v] = W;
	w[v] = (B + W) % MOD;
	res = w[v];
}

void run_case() {
	int n;
	cin >> n;
	memset(b, 1LL, sizeof(b));
	memset(w, 2LL, sizeof(w));
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].emplace_back(y);
		adj[y].emplace_back(x);
	}
	dfs(1, -1);
	cout << res;
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
