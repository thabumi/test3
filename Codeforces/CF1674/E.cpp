#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mn = 1e9;
	for (int i = 0; i < n - 1; i++) {
		int x = min(a[i], a[i + 1]);
		int y = max(a[i], a[i + 1]);
		if (x * 2 <= y) {
			mn = min(mn, (y + 1) / 2);
		}
		else {
			mn = min(mn, (x + y + 2) / 3);
		}
	}
	for (int i = 0; i < n - 2; i++) {
		mn = min(mn, (a[i] + a[i + 2] + 1) / 2);
	}
	sort(a, a + n);
	mn = min(mn, (a[0] + 1) / 2 + (a[1] + 1) / 2);
	cout << mn;
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
