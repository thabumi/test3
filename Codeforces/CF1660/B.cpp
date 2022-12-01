#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		if (a[0] > 1) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	else {
		long long sum = 0;
		sort(a, a + n);
		if (a[n - 1] > a[n - 2] + 1) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
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
