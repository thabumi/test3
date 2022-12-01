#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	long long k;
	cin >> n >> k;
	long long a[n];
	long long b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	bool dp[2][n];
	dp[0][0] = dp[1][0] = 1;
	for (int i = 1; i < n; i++) {
		dp[0][i] = false;
		dp[1][i] = false;
		if (dp[0][i - 1]) {
			if (abs(a[i - 1] - a[i]) <= k) {
				dp[0][i] = 1;
			}
			if (abs(a[i - 1] - b[i]) <= k) {
				dp[1][i] = 1;
			}
		}
		if (dp[1][i - 1]) {
			if (abs(b[i - 1] - a[i]) <= k) {
				dp[0][i] = 1;
			}
			if (abs(b[i - 1] - b[i]) <= k) {
				dp[1][i] = 1;
			}
		}
	}
	if (dp[0][n - 1] || dp[1][n - 1]) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
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
