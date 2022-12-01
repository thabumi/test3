#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int r, c;
	while (cin >> r >> c) {
		if (r == 0 && c == 0) {
			break;
		}
		char a[r][c];
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> a[i][j];
			}
		}
		int res = 1e9;
		vector<int> cnt(r + c - 1);
		for (int i = 0; i <= r + c - 2; i++) {
			if (i < r) {
				cnt[i] = min(c, i + 1);
			}
			else {
				cnt[i] = min(c + r - i - 1, r);
			}
		}
		for (int i = 0; i < r + c - 1; i++) {
			cout << cnt[i] << " "; 
		}
		cout << '\n';
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (a[i][j] == '#') {
					cnt[i + j]--;
				}
				else if (a[i][j] == '.') {
					
				}
				else {
					cnt[i + j] = 1e9;
				}
			}
		}
		for (int i = 0; i < r + c - 1; i++) {
			if (res > cnt[i] && cnt[i] < 1e8) {
				res = cnt[i];
			}
		}
		if (res < 1e9) {
			cout << res << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
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
