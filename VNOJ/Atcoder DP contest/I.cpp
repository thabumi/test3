#include <bits/stdc++.h>
 
using namespace std;

double dp[3000][3000];

void run_case() {
	int n;
	cin >> n;
	double p[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	dp[1][0] = 1 - p[1];
	dp[1][1] = p[1];
	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][0] * (1 - p[i]);
		for (int j = 1; j <= i; j++) {
			dp[i][j] = dp[i - 1][j] * (1 - p[i]) + dp[i - 1][j - 1] * p[i];
		}
	}
	double res = 0;
	for (int j = 0; j <= n; j++) {
		if (j > n - j) {
			res += dp[n][j];
		}		
	}
	cout << fixed << setprecision(14) << res;
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
