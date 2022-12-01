#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	bool dp[k + 1];
	memset(dp, 0, sizeof(dp));
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= k; i++) {
		if (!dp[i]) {
			for (int j = 0; j < n; j++) {
				if (i + a[j] <= k) {
					dp[i + a[j]] = 1;
				}
			}
		}
	}
	if (dp[k]) {
		cout << "First";
	}
	else {
		cout << "Second";
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
