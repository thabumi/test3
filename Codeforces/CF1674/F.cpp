#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, m, q;
	cin >> n >> m >> q;
	char c[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
		}
	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << c[i][j];
//		}
//		cout << '\n';
//	}
	int a[n * m + 1];
	int idx = 1;
	int cnt = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (c[i][j] == '*') {
				a[idx] = 1;
				cnt++;
			}
			else {
				a[idx] = 0;
			}
			idx++;
		}
	}
	int res = 0;
	for (int i = cnt + 1; i <= m * n; i++) {
		if (a[i] == 1) {
			res++;
		}
	}
//	cout << cnt << ' ';
//	cout << res;
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		int ind = (y - 1) * n + x;
		if (a[ind] == 0) {
			cnt++;
			if (ind == cnt) {
				
			}
			else if (ind < cnt) {
				if (a[cnt] == 1) {
					res--;
				}
			}
			else {
				res++;
				if (a[cnt] == 1) {
					res--;
				}
			}
			a[ind] = 1;
		}
		else {
			if (ind == cnt) {
				cnt--;
//				a[ind] = 0;
			}
			else if (ind < cnt) {
				if (a[cnt] == 1) {
					res++;
				}
				cnt--;
			}
			else {
				res--;
				if (a[cnt] == 1) {
					res++;
				}
				cnt--;
			}
			a[ind] = 0;
		}
		cout << res << '\n';
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
