#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 998244353;

map<long long, long long> m;

long long res(long long n) {
	if (m[n]) {
		return m[n];
	}
	else {
		long long t = n / 2;
		long long Res = res(t);
		if (n % 2 == 1) {
			t++;
		}
		Res = Res * res(t) % MOD;
		m[n] = Res;
		return Res;
	}
	
}

void run_case() {
	long long n;
	cin >> n;
	cout << res(n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	m[0] = 0;
	m[1] = 1;
	m[2] = 2;
	m[3] = 3;
	m[4] = 4;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
