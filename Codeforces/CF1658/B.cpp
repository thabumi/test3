#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long MOD = 998244353;
	long long n;
	cin >> n;
	if (n % 2 != 0) {
		cout << 0 << '\n';
		return;
	}
	long long res = 1;
	for (long long i = 1; i <= n / 2; i++) {
		res = res * i % MOD * i % MOD;
	}
	if (res < 0) {
		res = res + MOD;
	}
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
