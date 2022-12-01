#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 998244353;

long long binpow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = binpow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 != 0) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	long long fact[61];
	fact[0] = 1;
	for (int i = 1; i <= 60; i++) {
		fact[i] = fact[i - 1] * i % MOD;
	}
//	int n;
//	cin >> n;
	long long a[61];
	long long b[61];
	a[2] = 1;
	b[2] = 0;
	for (int i = 4; i <= 60; i++) {
		a[i] = fact[i - 1] * binpow(fact[i / 2 - 1], MOD - 2) % MOD * binpow(fact[i / 2], MOD - 2) % MOD;
		a[i] = (a[i] + b[i - 2]) % MOD;
		b[i] = fact[i] * binpow(fact[i / 2], MOD - 2) % MOD * binpow(fact[i / 2], MOD - 2) % MOD - a[i] - 1;
		b[i] = (b[i] % MOD + MOD) % MOD;
	}
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		int n;
		cin >> n;
		cout << a[n] << " " << b[n] << " " << 1 << '\n';
	}
	return 0;	
}
