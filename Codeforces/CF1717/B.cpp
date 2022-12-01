#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k, r, C;
	cin >> n >> k >> r >> C;
	char c[n][n];
	r--;
	C--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j - r - C) % k == 0) {
				c[i][j] = 'X';
			}
			else {
				c[i][j] = '.';
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << c[i][j];
		}
		cout << '\n';
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
