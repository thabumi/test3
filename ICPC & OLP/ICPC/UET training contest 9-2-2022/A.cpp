#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

long long Pow(long long a, long long b) {
	if (a == 0) {
		return 0;
	}
	if (b == 0) {
		return 1;
	}
	long long t = Pow(a, b / 2);
	t = t * t % MOD;
	if (b & 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	long long n;
	cin >> n;
	if (n == 0) {
		cout << 0 << '\n';
		return;
	}
//	n--;
	for (int i = 1; i <= 20; i++) {
		cout << (i ^ 5) << " ";
	}
	cout << '\n';
	cout << Pow(n, 2) * Pow(n - 1, 2) % MOD * 2 % MOD << '\n';
//	cout << n % MOD * n % MOD * (n - 1) % MOD * (n - 1) % MOD * 2 % MOD << '\n';
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
