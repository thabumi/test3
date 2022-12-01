#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	cout << '\n';
	int r, c;
	cin >> r >> c;
	char a[2][2] = {{'+', '-'}, {'|', '.'}};
	char grid[r * 2 + 1][c * 2 + 1];
	for (int i = 0; i <= r * 2; i++) {
		for (int j = 0; j <= c * 2; j++) {
			grid[i][j] = a[i % 2][j % 2];
		}
	}
	grid[0][0] = grid[0][1] = grid[1][0] = grid[1][1] = '.';
	for (int i = 0; i <= r * 2; i++) {
		for (int j = 0; j <= c * 2; j++) {
			cout << grid[i][j];
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
