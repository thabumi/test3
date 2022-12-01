#include <bits/stdc++.h>
 
using namespace std;

long double dp[301][301][301];
int n;
double process(int a, int b, int c) {
	if (a == 0 && b == 0 && c == 0) {
		return 0;
	}
	if (dp[a][b][c] > 1e-9) {
		return dp[a][b][c];
	}
	else {
		int cnt = 0;
		long double sum = 0;
		if (a > 0) {
			process(a - 1, b, c);
			sum += dp[a - 1][b][c] * a / (a + b + c);
//			cout << a - 1 << " " << b << " " << c << " " << dp[a - 1][b][c] << '\n';
			cnt++;
		}
		if (b > 0) {
			process(a + 1, b - 1, c);
			sum += dp[a + 1][b - 1][c] * b / (a + b + c);
//			cout << a + 1 << " " << b - 1 << " " << c << " " << dp[a + 1][b - 1][c] << '\n';
			cnt++;
		}
		if (c > 0) {
			process(a, b + 1, c - 1);
			sum += dp[a][b + 1][c - 1] * c / (a + b + c);
//			cout << a << " " << b + 1 << " " << c - 1 << " " << dp[a][b + 1][c - 1] << '\n';
			cnt++;
		}
		dp[a][b][c] = sum + n * 1.0 / (a + b + c);
		return dp[a][b][c];
	}
}
void run_case() {
	dp[0][0][0] = 0;
	cin >> n;
	vector<int> cnt(4, 0);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}
	cout << fixed << setprecision(14);
	
//	cout << dp[cnt[1]][cnt[2]][cnt[3]];
	int a = cnt[1], b = cnt[2], c = cnt[3];
	process(a, b, c);
//	for (int i = 0; i <= a + b + c; i++) {
//		for (int j = 0; j <= b + c; j++) {
//			for (int k = 0; k <= c; k++) {
//				if (i + j + k > a + b + c) {
//					continue;
//				}
//				cout << i << " " << j << " " << k << " " << dp[i][j][k] << '\n';
//			}
//		}
//	}
	cout << fixed << setprecision(14) << dp[a][b][c];
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
