#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	long long k;
	cin >> n >> k;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<vector<long long>> dp(n + 5, vector<long long>(33, 0LL));
	dp[0][0] = 0;
	long long res = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= min(i, 32); j++) {
			
			if (j == 0) {
				dp[i][j] = dp[i - 1][j] + (a[i] / (1LL << j)) - k;
				res = max(res, dp[i][j]);
				continue;
			}
			if (i == j) {
				dp[i][j] = dp[i - 1][j - 1] + (a[i] / (1LL << j));
				res = max(res, dp[i][j]);
				continue;
			}
			dp[i][j] = max(dp[i - 1][j] + (a[i] / (1LL << j)) - k, dp[i - 1][j - 1] + (a[i] / (1LL << j)));
			res = max(res, dp[i][j]);
		}
	}
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= min(i, 32); j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return;
//	long long res = -1e18;
//	for (int j = 0; j <= min(n, 32); j++) {
//		res = max(res, dp[n][j]);
//	}
//	for (int i = 0; i <= n; i++) {
//		res = max(res, dp[i][32]);
//	}
	cout << res << '\n';
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
