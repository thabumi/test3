#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long sumred = 0;
	long long sumblue = 0;
	
	if (n % 2 == 1) {
		int k = n / 2;
		for (int i = 0; i <= k; i++) {
			sumblue += a[i];
		}
		for (int i = k + 1; i < n; i++) {
			sumred += a[i];
		}
		if (sumblue < sumred) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		int k = n / 2;
		for (int i = 0; i < k; i++) {
			sumblue += a[i];
		}
		for (int i = k + 1; i < n; i++) {
			sumred += a[i];
		}
		if (sumblue < sumred) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
