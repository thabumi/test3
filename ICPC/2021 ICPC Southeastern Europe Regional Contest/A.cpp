#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s, t;
	cin >> n >> s >> t;
	vector<long long> dp(n);
	if (s[n - 1] < t[n - 1]) {
		dp[n - 1] = 1;
	}
	else {
		dp[n - 1] = 0;
	}
	long long res = 0;
	for (int i = n - 2; i >= 0; i--) {
		if (s[i] < t[i]) {
			dp[i] = n - i;
		}
		else if (s[i] == t[i]) {
			dp[i] = dp[i + 1];	
		}
		else {
			dp[i] = 0;
		}
		
	}
	for (int i = 0; i < n; i++) {
		res += dp[i];
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
