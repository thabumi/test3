#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int dp[m][n];
	dp[0][0] = a[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) {
				continue;
			}
			else if (j == 0) {
				dp[i][j] = dp[i - 1][j] + a[i][j];
			}
			else if (i == 0) {
				dp[i][j] = dp[i][j - 1] + a[i][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << dp[i][n - 1] << " ";
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


