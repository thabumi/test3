#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << '\n';
		cout << 1 << " " << 1;
		return;
	}
	cout << (2 * n - 1 + 2) / 3 << '\n';
	int k = (2 * n - 1 + 2) / 3;
	
	for (int i = 1; i <= n - k; i++) {
		cout << i << " " << n - k + 1 - i << '\n';
	}
//	return;
	for (int i = n - k + 1; i <= 2 * n - 2 * k - 1; i++) {
		cout << i << " " << 3 * n - 3 * k - i << '\n';
	}
//	return;
	for (int i = 2 * n - 2 * k; i <= k; i++) {
		cout << i << " " << i << '\n';
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
