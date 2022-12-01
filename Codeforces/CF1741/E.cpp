#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
        cin >> a[i];
	}
	vector<bool> dp(n + 1, 0);
	dp[0] = true;
	for (int i = 1; i <= n; i++) {
        if (i + a[i] <= n) {
            dp[i + a[i]] = dp[i + a[i]] | dp[i - 1];
        }
        if (i - a[i] - 1 >= 0) {
            dp[i] = dp[i] | dp[i - a[i] - 1];
        }
	}
	if (dp[n]) {
        cout << "YES\n";
	}
	else {
        cout << "NO\n";
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
