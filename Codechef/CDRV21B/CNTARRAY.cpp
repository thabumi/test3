#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

long long bp(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = bp(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	vector<long long> fact(3e5 + 5);
	vector<long long> invFact(3e5 + 5);
	fact[0] = 1;
	for (int i = 1; i <= 3e5; i++) {
		fact[i] = fact[i - 1] * i % MOD;
	}
	invFact[3e5] = bp(fact[3e5], MOD - 2);
	for (int i = 3e5 - 1; i >= 0; i--) {
		invFact[i] = invFact[i + 1] * (i + 1) % MOD;
	}
	int n, m;
	cin >> n >> m;
	int k = 0;
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (b[i] <= m) {
			k++;
		}
	}
	if (m < n) {
		cout << 0;
		return;
	}
	long long res = fact[m] * invFact[m - n] % MOD;
	for (int i = 1; i <= k; i++) {
		long long b = 1;
		if (i % 2 == 1) {
			b = -1;
		}
		res = res + b * fact[k] * invFact[i] % MOD * invFact[k - i] % MOD * fact[m - i] % MOD * invFact[m - n] % MOD;
		res = res % MOD;
	}
	if (res < 0) {
		res += MOD;
	}
	cout << res;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
