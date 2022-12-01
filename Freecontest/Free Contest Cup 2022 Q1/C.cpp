#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = (long long)1e9 + 7;

long long Pow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = Pow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 != 0) {
		t = t * a % MOD;
	}
	return t;
} 

long long Fact[(int)2e6 + 5];

void run_case() {
	long long n;
	cin >> n;
	long long res = Fact[2 * n];
//	long long k = Pow(2LL, n);
	res = res * Pow(2, n * (MOD - 2)) % MOD;
//	res = ((res % MOD) + MOD) % MOD;
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
	Fact[0] = 1;
	for (int i = 1; i <= 2e6 + 5; i++) {
		Fact[i] = Fact[i - 1] * i % MOD;
	}
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
