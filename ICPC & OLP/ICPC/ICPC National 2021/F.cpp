#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<vector<long long>> dp(n + 5, vector<long long> (n + 5, 0));
	dp[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				for (int k = 1; k <= j; k++) {
					dp[i][j] += dp[i - 1][k];
				}
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << '\n';
//	}
	long long res = 0;
	for (int i = 1; i <= n; i++) {
		res += dp[n][i];
	}
	cout << res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;
}
