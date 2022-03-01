#include <bits/stdc++.h>
 
using namespace std;

int check(char c) {
	return (c == '#');
}

void run_case() {
	int n;
	cin >> n;
	char c[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + 5 < n) {
				if (check(c[i][j]) + check(c[i + 1][j]) + check(c[i + 2][j]) + check(c[i + 3][j]) + check(c[i + 4][j]) + check(c[i + 5][j]) >= 4) {
					cout << "Yes";
					return;
				}
			}
			if (j + 5 < n) {
				if (check(c[i][j]) + check(c[i][j + 1]) + check(c[i][j + 2]) + check(c[i][j + 3]) + check(c[i][j + 4]) + check(c[i][j + 5]) >= 4) {
					cout << "Yes";
					return;
				}
			}
			if (i + 5 < n && j + 5 < n) {
				if (check(c[i][j]) + check(c[i + 1][j + 1]) + check(c[i + 2][j + 2]) + check(c[i + 3][j + 3]) + check(c[i + 4][j + 4]) + check(c[i + 5][j + 5]) >= 4) {
					cout << "Yes";
					return;
				}
			}
			if (i - 5 >= 0 && j + 5 < n) {
				if (check(c[i][j]) + check(c[i - 1][j + 1]) + check(c[i - 2][j + 2]) + check(c[i - 3][j + 3]) + check(c[i - 4][j + 4]) + check(c[i - 5][j + 5]) >= 4) {
					cout << "Yes";
					return;
				}
			}
		}
	}
	cout << "No";
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
