#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

void run_case() {
	
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	vector<long long> fact(1e7 + 5);
	vector<long long> t(1e7 + 5);
	vector<long long> s(1e7 + 5);
	fact[0] = 1;
	t[0] = 0;
	s[0] = 0;
	for (int i = 1; i <= 1e7; i++) {
		fact[i] = fact[i - 1] * i % MOD;
		t[i] = (t[i - 1] + fact[i - 1]) % MOD;
		s[i] = (s[i - 1] + t[i]) % MOD;
	}
	int tt;
	tt = 1;
	cin >> tt;
	for (int i = 0; i < tt; i++) {
		int n;
		cin >> n;
		long long res = (fact[n] - 2 * t[n] + s[n - 1] + 1) % MOD;
		if (res < 0) {
			res += MOD;
		}
		cout << res << '\n';
	}
	return 0;	
}
