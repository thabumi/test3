#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long dp[3002][3002];
long long pref[3002][3002];

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	memset(pref, 0, sizeof(pref));
	dp[1][1] = 1;
	pref[1][1] = 1;
//	for (int j = 1; j <= n; j++) {
//		dp[1][j] = 1;
//		pref[1][j] += pref[1][j - 1] + dp[1][j];
//		pref[1][j] %= MOD;
//	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (s[i - 2] == '>') {
//				dp[i][j] = dp[i - 1][j + 1] + dp[i - 1][j + 2] + ... + dp[i - 1][n]
				dp[i][j] = pref[i - 1][i - 1] - pref[i - 1][j - 1];
				dp[i][j] = (dp[i][j] % MOD + MOD) % MOD;
			}
			else {
				dp[i][j] = pref[i - 1][j - 1];
				dp[i][j] = (dp[i][j] % MOD + MOD) % MOD;
			}
			pref[i][j] = pref[i][j - 1] + dp[i][j];
			pref[i][j] = (pref[i][j] % MOD + MOD) % MOD;
		}
	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << pref[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return;
	cout << pref[n][n];
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
