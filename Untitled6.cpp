#include <bits/stdc++.h>

using namespace std;
long long MOD = 1e9 + 7;
long long binpow(long long a, long long b) {
	if (b == 0) {
		return 1LL;
	}
	long long t = binpow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	vector<long long> Fact(4e5 + 5);
	vector<long long> Pow2(2e5 + 5);
	vector<long long> rFact(4e5 + 5);
	Fact[0] = 1;
	Pow2[0] = 1;
	rFact[0] = 1;
	for (int i = 1; i <= 4e5; i++) {
		Fact[i] = Fact[i - 1] * i % MOD;
	}
	rFact[400000] = binpow(Fact[400000], MOD - 2);
	for (int i = 4e5 - 1; i >= 1; i--) {
		rFact[i] = rFact[i + 1] * (i + 1) % MOD;
	}
	Pow2[200000] = binpow(2LL, MOD - 1 - 200000);
	for (int i = 2e5 - 1; i >= 1; i--) {
		Pow2[i] = Pow2[i + 1] * 2 % MOD;
	}
//	return 0;
	for (int i = 0; i < t; i++) {
		long long n, k;
		cin >> n >> k;
//		cout << Fact[2 * n] << " " << rFact[k] << " " << rFact[n - k] << " " << Pow2[n] << '\n';
		cout << Fact[2 * n] * rFact[k] % MOD * rFact[n - k] % MOD * Pow2[n] % MOD << '\n';
	}
	return 0;	
}
