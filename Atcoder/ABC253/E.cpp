#include <bits/stdc++.h>

using namespace std;

long long MOD = 998244353;

long long binPow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    long long t = binPow(a, b / 2);
    t = t * t % MOD;
    if (b % 2 != 0) {
        t = t * a % MOD;
    }
    return t;
}

void run_case() {
	int n, m, k;
	cin >> n >> m >> k;
	if (k == 0) {
        cout << binPow(m, n);
        return;
	}
	long long dp[n + 1][m + 1];
	for (int i = 1; i <= m; i++) {
        dp[1][i] = i;
	}
	for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
	}
	for (int i = 2; i <= n; i++) {

        for (int j = 1; j <= m; j++) {
            int left = max(j - k + 1, 1);
            int right = min(j + k - 1, m);
            dp[i][j] = dp[i][j - 1] + dp[i - 1][m] - dp[i - 1][right] + dp[i - 1][left - 1];
            dp[i][j] = (dp[i][j] % MOD + MOD) % MOD;
//            dp[i][j] %= MOD;
//            if (dp[i][j] < 0) {
//                dp[i][j] += MOD;
//            }
        }
	}
//	for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= m; j++) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//	}
	cout << dp[n][m];
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
