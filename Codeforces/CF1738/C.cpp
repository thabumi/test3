#include <bits/stdc++.h>

using namespace std;

bool dp[101][101][2];

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	int odd = 0;
	int even = 0;
	for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
	}
	string A = "Alice\n";
	string B = "Bob\n";

//	for (int i = 0; i <= 2; i++) {
//        for (int j = 0; j <= 2; j++) {
//            cout << dp[i][j][0] << " ";
//        }
//        cout << '\n';
//	}
//	for (int i = 0; i <= 2; i++) {
//        for (int j = 0; j <= 2; j++) {
//            cout << dp[i][j][1] << " ";
//        }
//        cout << '\n';
//	}
	if (dp[even][odd][0]) {
        cout << A;
	}
	else {
        cout << B;
	}
//	cout << dp[even][odd];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
//	bool dp[n + 1][n + 1][2];
	dp[0][0][0] = 1;
	dp[0][0][1] = 0;
	for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            if (i == 0) {
                if (j % 4 == 3 || j % 4 == 0) {
                    dp[0][j][0] = 1;
                    dp[0][j][1] = 0;
                }
                else {
                    dp[0][j][0] = 0;
                    dp[0][j][1] = 1;
                }
            }
            else if (j == 0) {
                dp[i][0][0] = 1;
                dp[i][0][1] = 0;
            }
            else if (j % 2 == 0) {
                dp[i][j][0] = (!dp[i - 1][j][1]) | (!dp[i][j - 1][1]);
                dp[i][j][1] = (!dp[i - 1][j][0]) | (!dp[i][j - 1][0]);
            }
            else {
                dp[i][j][0] = (!dp[i - 1][j][0]) | (!dp[i][j - 1][0]);
                dp[i][j][1] = (!dp[i - 1][j][1]) | (!dp[i][j - 1][1]);
            }
        }
	}
//	for (int i = 1; i <= 100; i++) {
//        if (i % 4 == 3 || i % 4 == 0) {
//                dp[0][i][0] = 1;
//
//        }
//        else {
//            dp[0][i][0] = 0;
//        }
//        dp[0][i][1] = !dp[0][i][0];
////        dp[0][i] = i % 4 / 2;
//        dp[i][0][0] = 1;
//        dp[i][0][1] = 0;
//        for (int j = 1; j <= i - 1; j++) {
//            if ((i - j) % 2 == 0) {
//                dp[j][i - j][0] = (!dp[j - 1][i - j][1]) & (!dp[j][i - j - 1][1]);
//                dp[j][i - j][1] = (!dp[j - 1][i - j][0]) & (!dp[j][i - j - 1][0]);
//            }
//            else {
//                dp[j][i - j][0] = (!dp[j - 1][i - j][0]) & (!dp[j][i - j - 1][0]);
//                dp[j][i - j][1] = (!dp[j - 1][i - j][1]) & (!dp[j][i - j - 1][1]);
//            }
//
//
//        }
//	}
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
