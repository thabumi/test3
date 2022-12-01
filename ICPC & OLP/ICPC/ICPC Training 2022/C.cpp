#include <bits/stdc++.h>

using namespace std;

char c[1001][1001];
int n;

int dRow[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dCol[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool inside(int a, int b) {
	return (a >= 0 && a < n && b >= 0 && b < n);
}


bool checking(int a, int b) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			int x = a + dRow[i], y = b + dCol[j];
			if (inside(x, y) && c[x][y] == 'K') {
				return true;
			}
		}
	}
	return false;
} 

void run_case() {
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c[i][j];
		}
	} 
	int cnt = 0;
	bool ok = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (c[i][j] == '*') {
				if (checking(i, j)) {
					continue;
				}
				if (inside(i + 1, j - 1) && c[i + 1][j - 1] == 'P') {
					continue;
				}
				if (inside(i + 1, j + 1) && c[i + 1][j + 1] == 'P') {
					continue;
				}
				if (inside(i + 1, j + 1) && c[i + 1][j + 1] == '-') {
					cnt++;
					c[i + 1][j + 1] = 'P';
					continue;
				}
				if (inside(i + 1, j - 1) && c[i + 1][j - 1] == '-') {
					cnt++;
					c[i + 1][j - 1] = 'P';
					continue;
				}
				cout << -1;
				return;
			}
		}
	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << c[i][j];
//		}
//		cout << '\n';
//	}
	cout << cnt;
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
