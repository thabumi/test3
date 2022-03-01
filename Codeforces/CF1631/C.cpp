#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	if (k == n - 1) {
		if (n <= 4) {
			cout << -1 << '\n';
			return;
		}
		cout << n - 1 << " " << n - 2 << '\n';
		cout << n - 3 << " " << 1 << '\n';
		cout << 0 << " " << 2 << '\n';
		for (int i = 3; i < n / 2; i++) {
			cout << i << " " << n - 1 - i << '\n';
		}
		return;
	}
	if (k == 0) {
		for (int i = 0; i < n / 2; i++) {
			cout << i << " " << n - 1 - i << '\n';
		}
		return;
	}
	cout << 0 << " " << n - 1 - k << '\n';
	cout << n - 1 << " " << k << '\n';
	for (int i = 0; i < n / 2; i++) {
		if (i == k || i == n - 1 - k || i == 0) {
//			cout << n - 1 << " " << k << '\n';
			continue;
		}
		cout << i << " " << n - 1 - i << '\n';
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
