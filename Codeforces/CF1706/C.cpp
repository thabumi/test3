#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n % 2 != 0) {
		long long res = 0;
		for (int i = 1; i < n ; i += 2) {
			res += max(max(a[i - 1], a[i + 1]) + 1 - a[i], 0LL);
		}
		cout << res << '\n';
		return;
	}
	long long needed[n];
	needed[0] = needed[n - 1] = 1e18;
	for (int i = 1; i < n - 1; i++) {
		needed[i] = max(max(a[i - 1], a[i + 1]) + 1 - a[i], 0LL);
	}
//	for (int i = 1; i < n - 1; i++) {
//		cout << needed[i] << " ";
//	}
//	cout << '\n';
	// 0 1 2... n-2 n-1
	long long sumodd = 0;
	long long sumeven = 0;
	for (int i = 2; i < n - 1; i += 2) {
		sumeven += needed[i];
	}
//	cout << sumodd << " " << sumeven << '\n';
	long long res = sumodd + sumeven;
	for (int i = 1; i < n - 1; i += 2) {
		sumodd += needed[i];
		sumeven -= needed[i + 1];
//		cout << sumodd << " " << sumeven << '\n';
		res = min(res, sumodd + sumeven);
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
