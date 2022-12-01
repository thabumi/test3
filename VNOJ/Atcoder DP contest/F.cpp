#include <bits/stdc++.h>
 
using namespace std;
vector<vector<string>> dp;
void run_case() {
	string s;
	string t;
	cin >> s >> t;
	int n = s.size();
	int m = t.size();
	dp.assign(n, vector<string>(m, ""));
	vector<int> dp[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dp[i][j].resize(3);
		}
	}
	dp[0][0][0] = 0;
	dp[0][0][1] = -1;
	dp[0][0][2] = -1;
	if (s[0] == t[0]) {
		dp[0][0][0] = 1;
		
//		dp[0][0] += s[0];
	}
	
	
//	cout << dp[0][0] << '\n';
	for (int i = 1; i < n; i++) {
//		if (s[i] == t[0] && dp[i - 1][0].size() == 0) {
//			dp[i][0] += s[i];
//		}
//		else {
//			dp[i][0] = dp[i - 1][0];
//		}
		dp[i][0][0] = dp[i - 1][0][0] | (s[i] == t[0]);
		dp[i][0][1] = i - 1;
		dp[i][0][2] = 0;
	}
	for (int j = 1; j < m; j++) {
//		if (t[j] == s[0] && dp[0][j - 1].size() == 0) {
//			dp[0][j] += t[j];
//		}
//		else {
//			dp[0][j] = dp[0][j - 1];
//		}
		dp[0][j][0] = dp[0][j - 1][0] | (t[j] == s[0]);
		dp[0][j][1] = 0;
		dp[0][j][2] = j - 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (s[i] == t[j]) {
				dp[i][j][0] = dp[i - 1][j - 1][0] + 1;
				dp[i][j][1] = i - 1;
				dp[i][j][2] = j - 1;
			}
			else {
				if (dp[i - 1][j][0] >= dp[i][j - 1][0]) {
					dp[i][j][0] = dp[i - 1][j][0];
					dp[i][j][1] = i - 1;
					dp[i][j][2] = j; 
				}
				else {
					dp[i][j][0] = dp[i][j - 1][0];
					dp[i][j][1] = i;
					dp[i][j][2] = j - 1; 
				}
			}
//			if (s[i] == t[j]) {
//				dp[i][j] = dp[i - 1][j - 1] + s[i];
//			}
//			else {
//				dp[i][j] = dp[i - 1][j];
//				if (dp[i][j].size() < dp[i][j - 1].size()) {
//					dp[i][j] = dp[i][j - 1];
//				}
//			}
		}
//		if (i >= 3) {
//			dp[i - 1].clear();
//		}
		
	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return;
	int i = n - 1;
	int j = m - 1;
	string res = "";
//	int cnt = 0;
	while (1) {
		int newi = dp[i][j][1];
		int newj = dp[i][j][2];
		if (newi < 0 || newj < 0) {
			if (dp[0][0][0]) {
				res = s[0] + res;
			}
			break;
		}
		if (dp[i][j][0] > dp[newi][newj][0]) {
			res = s[i] + res;
		}
		i = newi;
		j = newj;
//		cnt++;
	}
//	cout << i << " " << j << '\n';
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
