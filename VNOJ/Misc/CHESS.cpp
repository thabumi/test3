#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
//	cout << INT_MIN / 2;
	int n;
	while (cin >> n) {
		if (n == 0 || n == 14 || n == 34) {
			cout << "Black\n";
		}
		else {
			int k = n % 170;
//			cout << k << " ";
			vector<int> v = {4, 8, 20, 24, 28, 38, 42, 54, 58, 62, 72, 76, 88, 92, 96, 106, 110, 122, 126, 130, 140, 144, 156, 160, 164};
			if (find(v.begin(), v.end(), k) == v.end()) {
				cout << "White\n";
			}
			else {
				cout << "Black\n";
			}
		}
	}
	
	
	return;
//	int n = 5005;
//	int dp[n * 2];
//	dp[0] = 0;
//	dp[1] = 1;
//	dp[2] = 1;
//	dp[3] = 2;
//	dp[4] = 0;
//	for (int i = 5; i <= 2 * n - 5; i++) {
//		vector<int> m(n, 0);
//		m[dp[i - 2]] = 1;
//		for (int j = 0; j <= i - 3; j++) {
//			m[dp[j] ^ dp[i - 3 - j]] = 1;
//		}
//		for (int j = 0; j <= i; j++) {
//			if (!m[j]) {
//				dp[i] = j;
//				break;
//			}
//		}
//	}
//	int cnt = 0;
//	int cnt2 = 0;
//	for (int i = 0; i <= n - 5; i++) {
////		if (dp[i] >= 10) {
////			cout << i << '\n';
////		}
//		if (dp[i] == 0 && dp[i + 170] * dp[i + 340] == 0) {
//			cout << i << '\n';
//			cnt++;
//		}
//		if (dp[i] == 0) {
//			cnt2++;
//		}
////		cout << i << " " << dp[i] << '\n';
//	}
//	cout << cnt << " " << cnt2;
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
