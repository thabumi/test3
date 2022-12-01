#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	long long a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];	
	} 
	long long sum = 0;
	for (long long i = 1; i <= n; i++) {
		sum += 1LL * i * (n + 1 - i);
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			sum -= 1LL * (i + 1) * (n - 1 - i);
		}
	}
	for (int i = 0; i < m; i++) {
		long long k, x;
		cin >> k >> x;
		k--;
		if (k > 0) {
			if (a[k - 1] == a[k]) {
				sum += 1LL * k * (n - k);
			}
		}
		if (k < n - 1) {
			if (a[k] == a[k + 1]) {
				sum += 1LL * (k + 1) * (n - 1 - k);
			}
		}
		a[k] = x;
		if (k > 0) {
			if (a[k - 1] == a[k]) {
				sum -= 1LL * k * (n - k);
			}
		}
		if (k < n - 1) {
			if (a[k] == a[k + 1]) {
				sum -= 1LL * (k + 1) * (n - 1 - k);
			}
		}
		cout << sum << '\n';
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
