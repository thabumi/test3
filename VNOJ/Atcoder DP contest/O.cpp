#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	vector<int> dp(1 << n, 0);
//	int dp[1 << n];
//	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	
	long long MOD = 1e9 + 7;
	for (int i = 1; i < (1 << n); i++) {
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				dp[i] += dp[i ^ (1 << j)] * a[j][__builtin_popcount(i) - 1];
				dp[i] %= MOD;
			}
		}
	}
	cout << dp[(1 << n) - 1];
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
