#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n % 2 == 0) {
		for (int i = 0; i < n - 1; i += 2) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}
	}
	else {
		for (int i = 1; i < n - 1; i += 2) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
