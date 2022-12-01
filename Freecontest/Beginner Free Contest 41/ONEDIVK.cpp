#include <bits/stdc++.h>
 
using namespace std;

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

long long binpow(long long a, long long b, long long MOD) {
	if (b == 0) {
		return 1;
	}
	long long t = binpow(a, b / 2, MOD);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	int n;
	cin >> n;
	if (n % 5 == 0 || n % 2 == 0) {
		cout << -1;
		return;
	}
	if (n == 1) {
		cout << 1;
		return;
	}
	n *= 9;
	int p = phi(n);
	for (int i = 1; i <= p; i++) {
		if (p % i == 0) {
			if (binpow(10, i, n) == 1) {
				cout << i;
				return;
			}
		}
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
