#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
int n;
int d;
vector<int> v;
long long dp[10005][105][2];
long long digitdp(int index, int mod, int tight) {
//	cout << index << " " << mod << " " << tight << endl;
	assert(index >= 0);
	assert(mod >= 0);
	assert(tight >= 0);
	if (dp[index][mod][tight] != -1) {
		return dp[index][mod][tight];
	}
	long long ans = 0;
	if (index == n - 1) {
		if (!tight) {
			for (int i = 0; i <= 9; i++) {
				if ((mod - i) % d == 0) {
					ans++;
				}
			}
		}
		else {
			for (int i = 0; i <= v[n - 1]; i++) {
				if ((mod - i) % d == 0) {
					ans++;
				}
			}
		}
		ans %= MOD;
		dp[index][mod][tight] = ans;
		return ans;
	}
//	digitdp(index + 1, ((mod - v[index]) % d + d) % d, 0);
//	digitdp(index + 1, ((mod - i) % d + d) % d, 0);
//	assert(index < n);
	if (tight) {
		for (int i = 0; i < v[index]; i++) {
			ans += digitdp(index + 1, ((mod - i) % d + d) % d, 0);
			ans %= MOD;
		}
		ans += digitdp(index + 1, ((mod - v[index]) % d + d) % d, 1);
		ans %= MOD;
	}
	else {
		for (int i = 0; i <= 9; i++) {
			ans += digitdp(index + 1, ((mod - i) % d + d) % d, 0);
			ans %= MOD;
		}
	}
	dp[index][mod][tight] = ans;
	return ans;
}

void run_case() {
	string k;
	cin >> k;
//	int d;
	cin >> d;
	n = k.size();
	v.resize(n);
	for (int i = 0; i < n; i++) {
		v[i] = (k[i] - '0');
	}
//	for (auto t : v) {
//		cout << t << " ";
//	}
//	cout << '\n';
//	cout << d;
//	return;
	memset(dp, -1, sizeof(dp));
	cout << ((digitdp(0, 0, 1) - 1) % MOD + MOD) % MOD;
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
