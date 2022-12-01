#include <bits/stdc++.h>
 
using namespace std;

char c[3005][3005];
long long cnt1[3005][3005];
long long cnt2[3005][3005];

void run_case() {
	int h, w;
	cin >> h >> w;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 1; i <= h; i++) {
		cnt1[i][w] = 0;
		for (int j = w - 1; j >= 1; j--) {
			cnt1[i][j] = cnt1[i][j + 1] + (c[i][j + 1] == 'O');
		}
	}
	for (int j = 1; j <= w; j++) {
		cnt2[1][h] = 0;
		for (int i = h - 1; i >= 1; i--) {
			cnt2[i][j] = cnt2[i + 1][j] + (c[i + 1][j] == 'I');
		}
	}
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= w; j++) {
//			cout << cnt1[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= w; j++) {
//			cout << cnt2[i][j] << " ";
//		}
//		cout << '\n';
//	}
	long long res = 0;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			res += 1LL * (c[i][j] == 'J') * cnt1[i][j] * cnt2[i][j];
		}
	}
	cout << res;
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
