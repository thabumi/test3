#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int cnt = 0;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n - 1; i++) {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			cnt++;
			a[i + 1] = a[i];
			if (i + 2 < n) {
				a[i + 1] = max(a[i], a[i + 2]);
			}
		}
	}
	cout << cnt << '\n';
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << '\n';
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
