#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 998244353;

long long Pow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = Pow(a, b / 2);
	t *= t;
	if (b % 2 == 1) {
		t *= a;
	}
	return t;
}

long long f(char c) {
	return c - 'A' + 1;
}

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	long long dp1[n + 1];
	long long dp2[n + 1];
	dp1[0] = f(s[0]) - 1;
	dp2[0] = 1;
	for (int i = 1; i * 2 < n; i++) {
		dp1[i] = (dp1[i - 1] * 26 + dp2[i - 1] * (f(s[i]) - 1)) % MOD;
		dp2[i] = 1;
//		cout << dp1[i] << " " << dp2[i] << '\n';
	}
//	long long dp[n + 1];
//	dp[0] = f(s[0]);
	long long res = dp1[(n - 1) / 2];
	string t = s.substr(0, n / 2);
	string T = t;
	reverse(T.begin(), T.end());
	if (n % 2 == 1) {
		t += s[n / 2];
	}
	t += T;
	if (t <= s) {
		res = (res + 1) % MOD;
	}
//	cout << t << '\n';
	cout << res << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
