#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	int countneg = 0;
	int count0 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			count0++;
		}
		if (a[i] < 0) {
			countneg++;
		}
	}	
	if (count0 > 1) {
		cout << 0;
		return;
	}
	else if (count0 == 1) {
		if (countneg % 2 == 0) {
			long long prod = 1;
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) {
					continue;
				}
				prod = prod * a[i] % MOD;
			}
			if (prod < 0) {
				prod += MOD;
			}
			cout << prod;
			return;
		}
		else {
			cout << 0;
			return;
		}
	}
	else {
		if (countneg % 2 == 0) {
			long long prod = 1;
			for (int i = 0; i < n; i++) {
				prod = prod * a[i] % MOD;
			}
			if (prod < 0) {
				prod += MOD;
			}
			cout << prod;
		}
		else {
			sort(a, a + n);
			int t = (upper_bound(a, a + n, 0) - a);
			
			long long prod = 1;
			for (int i = 0; i < n; i++) {
				if (i == t - 1) {
					continue;
				}
				prod = prod * a[i] % MOD;
			}
			if (prod < 0) {
				prod += MOD;
			}
			cout << prod;
		}
	}
//	else if (countneg == n) {
//		sort(a, a + n);
//		if (n & 1) { 
//			long long prod = 1;
//			for (int i = 0; i < n - 1; i++) {
//				prod = prod * a[i] % MOD;
//			}
//			if (prod < 0) {
//				prod += MOD;
//			}
//			cout << prod;
//		}
//		else {
//			long long prod = 1;
//			for (int i = 1; i < n; i++) {
//				prod = prod * a[i] % MOD;
//			}
//			if (prod < 0) {
//				prod += MOD;
//			}
//			cout << prod;
//		}
//	}
//	else {
//		if (countneg % 2 == 0) {
//			sort(a, a + n);
//			int t = (upper_bound(a, a + n, 0) - a);
//			long long prod = 1;
//			for (int i = 0; i < n; i++) {
//				if (i == t) {
//					continue;
//				}
//				prod = prod * a[i] % MOD;
//			}
//			if (prod < 0) {
//				prod += MOD;
//			}
//			cout << prod;
//		}
//		else {
//			sort(a, a + n);
//			int t = (lower_bound(a, a + n, 0) - a);
//			long long prod = 1;
//			for (int i = 0; i < n; i++) {
//				if (i == t - 1) {
//					continue;
//				}
//				prod = prod * a[i] % MOD;
//			}
//			if (prod < 0) {
//				prod += MOD;
//			}
//			cout << prod;
//		}
//	}
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


