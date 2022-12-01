#include <bits/stdc++.h>
 
using namespace std;

vector<int> v;
vector<vector<int>> dp;
const long long MOD = 1e9 + 7;
long long res(int m, int n) {
	if (m == 0) {
		return dp[n][m] = 1;
	}
	if (n == 0) {
		return 0;
	}
	if (dp[n][m] != -1) {
		return dp[n][m];
	}
	if (v[n - 1] <= m) {
		return dp[n][m] = (res(m - v[n - 1], n) + res(m, n - 1)) % MOD;
	}
	else {
		return dp[n][m] = res(m, n - 1);
	}
}

void run_case() {
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	
	for (int i = 1; i <= 9; i++) {
		v.push_back(i);
		v.push_back(i * 10 + i);
	}
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			v.push_back(i * 100 + j * 10 + i);
			v.push_back(i * 1001 + j * 110);
		}
	}
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {
				if (i * 10001 + j * 1010 + k * 100 <= 4e4) {
					v.push_back(i * 10001 + j * 1010 + k * 100);
				}
				
			}
		}
	}
	int n = v.size();
	sort(v.begin(), v.end());
	dp.assign(n + 1, vector<int>((int)4e4 + 1, -1LL));
//	cout << v.size() << '\n';
//	return 0;
//	for (auto t : v) {
//		cout << t << " ";
//	}
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int m;
		cin >> m;
		cout << res(m, n) << '\n';
//		cout << "Case #" << i << ": ";
//		run_case();
	}
	return 0;	
}
