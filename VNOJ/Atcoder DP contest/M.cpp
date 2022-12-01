#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long MOD = 1e9 + 7;
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]++;
	}
	vector<long long> res(k + 5, 0);
	res[0] = 1;
	vector<long long> sum(k + 5, 1); 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= k; j++) {
			res[j] = sum[j];
			if (j - a[i] >= 0) {
				res[j] = (res[j] - sum[j - a[i]]) % MOD;
			}
		}
		sum[0] = res[0];
		for (int j = 1; j <= k; j++) {
			sum[j] = (sum[j - 1] + res[j]) % MOD;
		}
	}
	res[k] = (res[k] + MOD) % MOD;
//	for (int i = 0; i <= k; i++) {
//		cout << res[i] << " ";
//	}
//	return;
	cout << res[k];
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
