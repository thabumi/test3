#include <bits/stdc++.h>
 
using namespace std;
long long MOD = 1e9 + 7;
long long Fact[(int)1e6 + 5];
long long invFact[(int)1e6 + 5];
long long binPow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = binPow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 != 0) {
		t = t * a % MOD;
	}
	return t;
}

long long C(long long k, long long n) {
	if (k > n || k < 0) {
		return 0;
	}
	return Fact[n] * invFact[k] % MOD * invFact[n - k] % MOD;
}

void run_case() {
	
	long long a, b, q;
	cin >> a >> b >> q;
	if (a < b) {
		swap(a, b);
	}
	Fact[0] = 1;
	for (int i = 1; i <= 1e6; i++) {
		Fact[i] = Fact[i - 1] * i % MOD; 
	}
	invFact[(int)1e6] = binPow(Fact[(int)1e6], MOD - 2);
	for (int i = 1e6 - 1; i >= 0; i--) {
		invFact[i] = invFact[i + 1] * (i + 1) % MOD;
	}
//	for (int i = 0; i <= 10; i++) {
//		cout << invFact[i] << ' ';
//	}
//	return;
	long long pref[b + 5];
	pref[0] = C(0, a) * C(0, b) % MOD;
	for (int i = 1; i <= b; i++) {
		pref[i] = (pref[i - 1] + C(i, a) * C(i, b) % MOD) % MOD;
	} 
//	cout << C(1, a) * C(1, b);
//	return;
//	for (int i = 0; i <= b; i++) {
//		cout << pref[i] << " ";
//	}
//	return;
	for (int i = 0; i < q; i++) {
		long long x, t;
		cin >> x >> t;
		long long leftbound = x - t;
		if (x - t > b) {
			cout << pref[b] << '\n';
			continue;
		}
		else {
			leftbound = max(leftbound, 0LL);
		}
		long long rightbound = x + t;
		if (x + t < 0) {
			cout << pref[b] << '\n';
			continue;
		}
		else {
			rightbound = min(rightbound, b);
		}
		
		long long fire = pref[rightbound];
		if (leftbound >= 1) {
			fire -= pref[leftbound - 1];
			fire %= MOD;
			fire = (fire + MOD) % MOD;
		}
		long long res = ((pref[b] - fire) % MOD + MOD) % MOD;
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
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
