#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m, r, c;
	cin >> n >> m >> r >> c;
	r--;
	c--;
	char A[n][m];
	bool OK = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
			if (A[i][j] == 'B') {
				OK = true;
			}
		}
	}
	if (!OK) {
		cout << -1 << '\n';
		return;
	}
	if (A[r][c] == 'B') {
		cout << 0 << '\n';
	}
	else {
		for (int i = 0; i < n; i++) {
			if (A[i][c] == 'B') {
				cout << 1 << '\n';
				return;
			}
		}
		for (int j = 0; j < m; j++) {
			if (A[r][j] == 'B') {
				cout << 1 << '\n';
				return;
			}
		}
		cout << 2 << '\n';
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
