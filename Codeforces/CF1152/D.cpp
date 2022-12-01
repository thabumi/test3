#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

void run_case() {
	int n;
	cin >> n;
	long long dp[n + 1][n + 1];
	vector<long long> v(2 * n + 1, 0);
	memset(dp, 0LL, sizeof(dp));
	dp[0][0] = 1;
	
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == 0 && j == 0) {
				continue;
			}
			if (i == 0) {
				dp[i][j] = dp[i][j - 1];
			}
			else if (j == 0) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
			}
			v[i + j] = (v[i + j] + dp[i][j]) % MOD;
		}
	}
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= n; j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	for (int i = 0; i <= 6; i++) {
//		cout << v[i] << " ";
//	}
	long long res = 0;
	for (int i = 0; i < 2 * n; i++) {
		res = (res + v[i]) % MOD;
		v[i + 1] = ((v[i + 1] - v[i]) % MOD + MOD) % MOD;
	}
	cout << res << '\n';
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
