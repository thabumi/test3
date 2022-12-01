#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long l, r;
	cin >> l >> r;
	long long k = r - l;
	for (long long i = k; i >= 1; i--) {
		for (long long j = l; j + i <= r; j++) {
			if (__gcd(j, i) == 1) {
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
