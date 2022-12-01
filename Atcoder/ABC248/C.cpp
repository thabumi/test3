#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m, k;
	cin >> n >> m >> k;
	k -= n;
	vector<int> a(n, m);
	long long MOD = 998244353;
	long long Sum = 0;
	for (int t = 0; t <= k; t++) {
		vector<long long> res(t + 5, 0);
		res[0] = 1;
		vector<long long> sum(t + 5, 1); 
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= t; j++) {
				res[j] = sum[j];
				if (j - a[i] >= 0) {
					res[j] = (res[j] - sum[j - a[i]]) % MOD;
				}
			}
			sum[0] = res[0];
			for (int j = 1; j <= t; j++) {
				sum[j] = (sum[j - 1] + res[j]) % MOD;
			}
		}
		res[t] = (res[t] + MOD) % MOD;
	//	for (int i = 0; i <= k; i++) {
	//		cout << res[i] << " ";
	//	}
	//	return;
		Sum = (Sum + res[t]) % MOD;
	}
	cout << Sum;
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
