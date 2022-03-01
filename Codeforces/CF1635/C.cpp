#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	bool b = true;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i > 0 && a[i] < a[i - 1]) {
			b = false;
		}
	}
	if (b) {
		cout << 0 << '\n';
		return;
	}
	if (a[n - 1] < a[n - 2]) {
		cout << -1 << '\n';
		return;
	}
	if (a[n - 1] >= 0) {
		cout << n - 2 << '\n';
		for (int i = n - 3; i >= 0; i--) {
			cout << i + 1 << " " << i + 2 << " " << n << '\n';
		}
	}
	else {
		cout << -1 << '\n';
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
