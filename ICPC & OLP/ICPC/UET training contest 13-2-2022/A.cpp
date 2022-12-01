#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cout << n << " " << m << " " << k << '\n';
	if (k % 2 == 0) {
		cout << a[0][0] << '\n';
		return;
	}
	int mx = a[0][0];
	for (int i = 0; i < n; i++) {
		mx = max(mx, a[i][0]);
	}
	for (int j = 0; j < m; j++) {
		mx = max(mx, a[0][j]);
	}
	cout << mx << '\n';
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
