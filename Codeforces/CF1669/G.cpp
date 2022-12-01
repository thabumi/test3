#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	char c[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
		}
	}
//	vector<vector<char>> d(m, vector<char>(n));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			d[i][j] = c[j][i];
//		}
//	}
	
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			for (int k = i + 1; k < n; k++) {
				if (c[k][j] == 'o') {
					break;
				}
				if (c[i][j] == '*' && c[k][j] == '.') {
					swap(c[i][j], c[k][j]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << c[i][j];
		}
		cout << '\n';
	}
//	cout << '\n';
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
