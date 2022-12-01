#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long dp[n][n];
	long long sum[n];
	sum[0] = a[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	for (int i = 0; i < n; i++) {
		dp[i][i] = 0;
	}
	for (int i = 0; i < n - 1; i++) {
		dp[i][i + 1] = a[i] + a[i + 1];
	}
	for (int i = 2; i < n; i++) {
		for (int j = 0; j + i < n; j++) {
			dp[j][j + i] = 1e18;
			long long t = 0;
			if (j >= 1) {
				t = sum[j - 1];
			}
			for (int k = j; k < j + i; k++) {
				dp[j][j + i] = min(dp[j][k] + dp[k + 1][j + i] + sum[j + i] - t, dp[j][j + i]);
			}
		}
	}
//	for (int i = 0; i < n; i++) {
//		cout << sum[i] << " ";
//	}
//	cout << '\n';
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j < n; j++) { 
//			cout << i << " " << j << " " << dp[i][j] << '\n';
//		}
////		cout << '\n';
//	}
//	return;
	cout << dp[0][n - 1];
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
