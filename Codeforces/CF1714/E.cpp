#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 5 == 0) {
			cnt++;
		}
	}
	if (cnt > 0 && cnt < n) {
		cout << "No\n";
		return;
	}
	if (cnt == n) {
		sort(a, a + n);
		if (a[0] == a[n - 1]) {
			cout << "Yes\n";
			return;
		}
		for (int i = 0; i < n; i++) {
			if (a[i] % 10 == 5) {
				a[i] += 5;
			}
		}
		sort(a, a + n);
		if (a[0] == a[n - 1]) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			while (a[i] % 10 != 2) {
				a[i] = a[i] + (a[i] % 10);
			}
			a[i] /= 10;
			a[i] = a[i] % 2;
		}
		sort(a, a + n);
		if (a[0] == a[n - 1]) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
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
