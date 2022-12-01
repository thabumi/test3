#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, w;
	cin >> n >> w;
	long long wei[n], val[n];
	for (int i = 0; i < n; i++) {
		cin >> wei[i] >> val[i];
	}
	long long dp[w + 5];
	for (int i = 0; i <= w; i++) {
		dp[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = w; j >= 0; j--) {
			if (j - wei[i] >= 0) {
				dp[j] = max(dp[j], dp[j - wei[i]] + val[i]);
			}
		}
	}
	cout << dp[w];
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
