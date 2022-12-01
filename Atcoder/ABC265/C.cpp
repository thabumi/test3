#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int h, w;
	cin >> h >> w;
	map<pair<int, int>, int> m;
	char c[h + 5][w + 5];
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> c[i][j];
		}
	}
	int i = 1, j = 1;
	while (!m[{i, j}]) {
		m[{i, j}] = 1;
		if (c[i][j] == 'U') {
			if (i != 1) {
				i--;
			}
			else {
				cout << i << " " << j;
				return;
			}
		}
		else if (c[i][j] == 'D') {
			if (i != h) {
				i++;
			}
			else {
				cout << i << " " << j;
				return;
			}
		}
		else if (c[i][j] == 'L') {
			if (j != 1) {
				j--;
			}
			else {
				cout << i << " " << j;
				return;
			}
		}
		else {
			if (j != w) {
				j++;
			}
			else {
				cout << i << " " << j;
				return;
			}
		}
	}
	cout << -1;
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
