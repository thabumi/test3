#include <bits/stdc++.h>

using namespace std;
int n;
const int N = 2e5 + 5;
long long a[N];
long long b[N];
long long res[N];
vector<vector<int>> adj;
vector<long long> v;
vector<long long> sumA(N);
vector<long long> sumB(N);
void dfs(int g, int prev) {
	if (g != 1) {
		v.push_back(sumB[g]);
		int t = (int)(upper_bound(v.begin(), v.end(), sumA[g]) - v.begin());
		res[g] = t;	
	}
	for (auto t : adj[g]) {
		if (t == prev) {
			continue;
		}
		sumA[t] = sumA[g] + a[t];
		sumB[t] = sumB[g] + b[t];
		dfs(t, g);
	}
	if (g != 1) {
		v.pop_back();
	}
}
void run_case() {
	cin >> n;
	adj.assign(n + 5, vector<int>());
	sumA[1] = 0;
	sumB[1] = 0;
	for (int i = 2; i <= n; i++) {
		int p;
		cin >> p >> a[i] >> b[i];
		adj[p].push_back(i);
		adj[i].push_back(p);
	}
	dfs(1, -1);
	for (int i = 2; i <= n; i++) {
		cout << res[i] << ' ';
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
