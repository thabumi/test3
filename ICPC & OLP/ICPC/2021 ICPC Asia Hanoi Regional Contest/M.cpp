#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1e9 + 7;

void run_case() {
	string s;
	cin >> s;
	int n = s.size();
	s = '.' + s;
	long long dp1[n + 5];
	long long dp2[n + 5];
	long long sum[n + 5];
	long long sum2[n + 5];
	sum[0] = 0;
	dp1[0] = 0;
	dp2[0] = 0;
	sum2[0] = 0;
	for (long long i = 1; i <= n; i++) {
		dp1[i] = dp1[i - 1] * 10 + (s[i] - '0') * i;
		dp1[i] %= MOD;
		sum[i] = (sum[i - 1] + dp1[i]) % MOD;
		
		
		
		sum2[i] = (sum2[i - 1] + dp1[i] * sum[i - 1]) % MOD;
//		cout << dp2[i] << " ";
//		cout << sum2[i] << ' ';
		dp2[i] = (s[i] - '0') * (dp1[i] - (s[i] - '0')) % MOD;
//		cout << dp2[i] << " ";
		dp2[i] = dp2[i] + dp2[i - 1] * 100;
		dp2[i] %= MOD;
//		cout << dp2[i] << " ";
		dp2[i] = dp2[i] + dp1[i - 1] * (s[i] - '0') * 10 * (i - 2) % MOD + 1LL * (s[i] - '0') * (s[i] - '0') * (i - 1) * (i - 2) / 2 % MOD;
		dp2[i] %= MOD;
		sum2[i] = sum2[i] + dp2[i];
		sum2[i] %= MOD;
//		cout << dp2[i] << " ";
//		cout << '\n';
//		cout << sum2[i] << ' ';
//		cout << i << " " << dp1[i] << " " << dp2[i] << " " << sum[i] << '\n';
	} 
	cout << ((sum[n] * sum[n] - 2 * sum2[n]) % MOD + MOD) % MOD;
	
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
