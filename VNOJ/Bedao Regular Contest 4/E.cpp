#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	
	map<int, int> m;
	int two = 1;
	int cnt = 0;
	while (two <= 1e8) {
		m[two] = cnt;
		two *= 2;
		cnt++; 
	}
	map<int, int> u;
	for (int i = 0; i <= 32; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				u[i]++;
			}
		}
	}
//	int n, q;
//	cin >> n >> q;
//	int a[n + 5];
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < q; i++) {
//		int k, r;
//		cin >> k >> r;
//		int sum = 0;
//		for (int j = k; j <= r; j++) {
//			int lm = 1;
//			for (int l = j; l <= r; l++) {
//				lm = (a[l] * lm / __gcd(lm, a[l]));
//			}
//			sum += u[m[lm]];
//		}
//		cout << sum << '\n';
//	}
	
	int n, q;
	cin >> n >> q;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		assert(a[i] == 1 || m[a[i]] != 0);
		a[i] = m[a[i]];
		
	}
	
//	cout << u[16];
	long long dp[n + 5];
	dp[1] = u[a[1]];
	int mx = a[1];
	for (int i = 2; i <= n; i++) {
		if (a[i] > mx) {
			mx = a[i];
			dp[i] = 1LL * i * u[a[i]];
		}
		else {
			dp[i] = dp[i - 1] + u[a[i]];
		}
	}
	for (int i = 0; i < q; i++) {
		int k, r;
		cin >> k >> r;
		cout << dp[r] << '\n';
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
