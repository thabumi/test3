#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	char a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	bool check = true;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < m; j++) {
			if (a[i][j] == '1' && a[i + 1][j] == '1' && a[i][j - 1] != a[i + 1][j - 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (a[i][j] == '1' && a[i + 1][j] == '1' && a[i][j + 1] != a[i + 1][j + 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (a[i][j] == '1' && a[i - 1][j] == '1' && a[i][j - 1] != a[i - 1][j - 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (a[i][j] == '1' && a[i - 1][j] == '1' && a[i][j + 1] != a[i - 1][j + 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int j = 0; j < m - 1; j++) {
		for (int i = 1; i < n; i++) {
			if (a[i][j] == '1' && a[i][j + 1] == '1' && a[i - 1][j] != a[i - 1][j + 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int j = 0; j < m - 1; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (a[i][j] == '1' && a[i][j + 1] == '1' && a[i + 1][j] != a[i + 1][j + 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int j = 1; j < m; j++) {
		for (int i = 1; i < n; i++) {
			if (a[i][j] == '1' && a[i][j - 1] == '1' && a[i - 1][j] != a[i - 1][j - 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	for (int j = 1; j < m; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (a[i][j] == '1' && a[i][j - 1] == '1' && a[i + 1][j] != a[i + 1][j - 1]) {
				cout << "NO\n";
				return;
			}
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
