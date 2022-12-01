#include <bits/stdc++.h>
 
using namespace std;

long long dp[3001][3001];

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		dp[i][i] = a[i];
	}
	for (int k = 1; k < n; k++) {
		for (int i = 0; i < n; i++) {
			if (i + k < n) {
				dp[i][i + k] = max(a[i] - dp[i + 1][i + k], a[i + k] - dp[i][i + k - 1]);
			}
		}
	}
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
