#include <bits/stdc++.h>

using namespace std;

int row[] = {-1, -1, 1, 1};
int col[] = {-1, 1, -1, 1};

int roww[] = {-1, 0, 0, 1};
int coll[] = {0, -1, 1, 0};

void run_case() {
	int n, m;
	cin >> n >> m;
	char c[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (c[i][j] == '*') {
				int cntt = 0;
				for (int k = 0; k < 4; k++) {
					int x = i + row[k];
					int y = j + col[k];
					if (x < 0 || x >= n || y < 0 || y >= m) {
						continue;
					}
					if (c[x][y] == '*') {
						cntt++;
					}
				}
				for (int k = 0; k < 4; k++) {
					int x = i + roww[k];
					int y = j + coll[k];
					if (x < 0 || x >= n || y < 0 || y >= m) {
						continue;
					}
					if (c[x][y] == '*') {
						cntt++;
					}
				}
				if (cntt > 2) {
					cout << "NO\n";
					return;
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (c[i][j] == '*') {
				int cnt = 0;
				
				for (int k = 0; k < 4; k++) {
					int x = i + row[k];
					int y = j + col[k];
					if (x < 0 || x >= n || y < 0 || y >= m) {
						continue;
					}
					else {
						if (c[x][y] == '*') {
							cnt++;
							if (cnt == 2) {
								cout << "NO\n";
								return;
							}
							else {
								int cnt2 = 0;
								if (c[i][y] == '*') {
									c[i][y] = c[i][j] = c[x][y] = '/';
									cnt2++;
								}
								if (c[x][j] == '*') {
									c[x][j] = c[i][j] = c[x][y] = '/';
									cnt2++;
								}
								if (cnt2 != 1) {
									cout << "NO\n";
									return;
								}
							}
						}
					}
				}
				if (cnt == 0) {
					c[i][j] = '/';
					int cnt3 = 0;
					for (int k = 0; k < 4; k++) {
						int x = i + roww[k];
						int y = j + coll[k];
						if (x < 0 || x >= n || y < 0 || y >= m) {
							continue;
						}
						if (c[x][y] == '*') {
							c[x][y] = '/';
							cnt3++;
						}
					}
					if (cnt3 != 2) {
						cout << "NO\n";
						return;
					} 
					
				}
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
