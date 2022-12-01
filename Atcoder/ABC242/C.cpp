#include <bits/stdc++.h>
 
using namespace std;
long long dp[1000000 + 1][10];
void run_case() {
	long long MOD = 998244353;
	int n;
	cin >> n;
	
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
//	return;
	for (int i = 2; i <= n; i++) {
		dp[i][1] = (dp[i - 1][1] + dp[i - 1][2]) % MOD;
		dp[i][9] = (dp[i - 1][8] + dp[i - 1][9]) % MOD;
		for (int j = 2; j <= 8; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % MOD; 
		}
	}
	long long res = 0;
	for (int i = 1; i <= 9; i++) {
		res = (res + dp[n][i]) % MOD;
	}
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
