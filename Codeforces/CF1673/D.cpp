#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1e9 + 7;

void run_case() {
	long long b, q, y;
	long long c, r, z;
	cin >> b >> q >> y >> c >> r >> z;
	long long cmax = c + (z - 1) * r;
	long long bmax = b + (y - 1) * q;
	if (c < b || cmax > bmax || (c - b) % q != 0 || r % q != 0) {
		cout << 0 << '\n';
		return;
	}
	if (c - r < b || cmax + r > bmax) {
		cout << -1 << '\n';
		return;
	}
	long long k = sqrt(r);
	long long res = 0;
	for (long long i = 1; i <= k; i++) {
		if (r % i == 0) {
			if (i * q / __gcd(i, q) == r) {
				res = (res + (r / i) * (r / i)) % MOD;	
			}
			long long t = r / i;
			if (t != i) {
				if (t * q / __gcd(t, q) == r) {
					res = (res + (r / t) * (r / t)) % MOD;	
				}
			}
			
		}
		
		
	}
//	if (k * k == r) {
//		if (k * q / __gcd(k, q) == r) {
//			res = (res + (r / k) * (r / k)) % MOD;
//		}
//	}
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
