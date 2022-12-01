#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
 	int a[n + 5][n + 5];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			char x;
			cin >> x;
			a[i][j] = x - '0';
		}
	}

	int res = 0;
	if (n % 2 == 0) {
		for (int i = 1; i <= n / 2; i++) {
			for (int j = 1; j <= n / 2; j++) {
				int t = a[i][j] + a[j][n + 1 - i] + a[n + 1 - i][n + 1 - j] + a[n + 1 - j][i];
				if (t == 2) {
					res += 2;
				}
				else if (t == 3 || t == 1) {
					res += 1;
				}
			}
		}
	}
	else {
		for (int i = 1; i <= n / 2; i++) {
			for (int j = 1; j <= n / 2 + 1; j++) {
				int t = a[i][j] + a[j][n + 1 - i] + a[n + 1 - i][n + 1 - j] + a[n + 1 - j][i];
				if (t == 2) {
					res += 2;
				}
				else if (t == 3 || t == 1) {
					res += 1;
				}
			}
		}
	}
	cout << res << '\n';
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
