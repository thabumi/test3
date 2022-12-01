#include <bits/stdc++.h>
 
using namespace std;

long long a[1005][1005];
char c[1005][1005];

void run_case() {
	int h, w;
	cin >> h >> w;
	a[1][1] = 1;
	int MOD = 1e9 + 7;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (c[i][j] == '#') {
				a[i][j] = 0;
				continue;
			}
			a[i][j] = (a[i][j] + a[i - 1][j] + a[i][j - 1]) % MOD;
		}
	}
	cout << a[h][w];
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
