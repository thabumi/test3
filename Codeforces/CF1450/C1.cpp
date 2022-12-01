#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	char a[n][n];
	vector<int> cnt(3, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'X') {
				cnt[(i + j) % 3]++;
			}
			
		}
	}
	int erase = 0;
	int mn = cnt[0];
	for (int i = 1; i < 3; i++) {
		if (cnt[i] < mn) {
			erase = i;
			mn = cnt[i];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j) % 3 == erase && a[i][j] == 'X') {
				a[i][j] = 'O';
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j];
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
