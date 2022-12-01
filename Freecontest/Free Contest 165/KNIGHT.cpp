#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1e9 + 7;
long long Fact[(int)3e6 + 5];
long long binPow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = binPow(a, b / 2);
	t = t * t % MOD;
	if (b % 2) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	
	long long n, m;
	cin >> n >> m;
	if ((m + n) % 3 != 0) {
		cout << 0;
		return;
	}
	long long a = (2 * m - n) / 3;
	long long b = (2 * n - m) / 3;
	if (a < 0 || b < 0) {
		cout << 0;
		return;
	}
	
	Fact[0] = 1;
	for (long long i = 1; i <= 3e6; i++) {
		Fact[i] = Fact[i - 1] * i % MOD;
	}
	cout << Fact[a + b] * binPow(Fact[a], MOD - 2) % MOD * binPow(Fact[b], MOD - 2) % MOD;
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
