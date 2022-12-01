#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int dp[n];
	dp[0] = 0;
	for (int i = 1; i < n; i++) {
		dp[i] = 1e9 + 50;
		for (int j = 1; j <= k; j++) {
			if (i - j >= 0) {
				dp[i] = min(dp[i], dp[i - j] + abs(a[i] - a[i - j]));	
			}
		}
	}
	cout << dp[n - 1];
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
