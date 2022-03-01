#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 998244353;

long long Pow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = Pow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	long long n;
	cin >> n;
	long long k = n / 2;
	if (n % 2 == 1) {
		long long one = Pow(2, k + 1);
		one = one * 3 % MOD;
		one = ((one - 6) % MOD + MOD % MOD);
		long long res = 3 * Pow(2, n - 1) + Pow(2, n) - 4;
		res %= MOD;
		res -= one;
		res %= MOD;
		res += MOD;
		res %= MOD;
		cout << res << '\n';
	}
	else {
		long long one = Pow(2, k + 2);
//		one = one * 3 % MOD;
		one = ((one - 6) % MOD + MOD % MOD);
		long long res = 3 * Pow(2, n - 1) + Pow(2, n) - 4;
		res %= MOD;
		res -= one;
		res %= MOD;
		res += MOD;
		res %= MOD;
		cout << res << '\n';
	}
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
