#include <bits/stdc++.h>
 
using namespace std;

int MOD = 1e9 + 7;

void run_case() {
	long long n;
	cin >> n;
	if (n % 3 == 1) {
		cout << n * (n + 1) / 2 % MOD * ((2 * n + 1) / 3) % MOD << '\n';
		return;
	}
	cout << n * (n + 1) / 6 % MOD * (2 * n + 1) % MOD << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
