#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
//	for (long long i = a + 1; i <= c; i++) {
//		long long m = a * b / __gcd(i, a * b);
//		if (d / m - b / m >= 1) {
//			cout << i << " " << d / m * m << '\n';
//			return;
//		} 
//	}
	for (long long i = 1; i <= sqrt(a); i++) {
		if (a % i == 0) {
			long long j = a * b / i;
			
			if (c / i - a / i >= 1 && d / j - b / j >= 1) {
				cout << c / i * i << " " << d / j * j << '\n';
				return;
			}
			else if (c / j - a / j >= 1 && d / i - b / i >= 1) {
				cout << c / j * j << " " << d / i * i << '\n';
				return;
			}
		}
	}
	for (long long i = 1; i <= sqrt(b); i++) {
		if (b % i == 0) {
			long long j = a * b / i;
			
			if (c / i - a / i >= 1 && d / j - b / j >= 1) {
				cout << c / i * i << " " << d / j * j << '\n';
				return;
			}
			else if (c / j - a / j >= 1 && d / i - b / i >= 1) {
				cout << c / j * j << " " << d / i * i << '\n';
				return;
			}
		}
	}
	cout << "-1 -1\n";
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
