#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

void run_case() {
	int n, p;
	cin >> n >> p;
	long long a[n];
	map<long long, int> m;
	vector<long long> v(200000 + 5, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];	
		m[a[i]] = 1;
	}
	sort(a, a + n);
//	return;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != -1) {
			long long k = a[i];
//			cout << k << endl;
			while (k >= 1) {
				if (k % 4 == 0) {
					k /= 4;
					if (m[k]) {
						a[i] = -1;
						break;
					}
				}
				else if (k % 2 != 0) {
					k /= 2;
					if (m[k]) {
						a[i] = -1;
						break;
					}
				}
				else {
					break;
				}
			}
		}
	}
//	return;
	for (int i = 0; i < n; i++) {
		if (a[i] == -1) {
			continue;
		}
//		assert(a[i] >= 1);
		int k = log2(a[i]);
		v[k]++;
	}
	vector<long long> dp(p + 5);
	dp[0] = 0;
	dp[1] = v[0];
	for (int i = 2; i <= p; i++) {
		dp[i] = dp[i - 2] + dp[i - 1] + v[i - 1];
		dp[i] %= MOD;
	}
	long long sum = 0;
	for (int i = 0; i <= p; i++) {
		sum = (sum + dp[i]) % MOD;
	}
	cout << sum;
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