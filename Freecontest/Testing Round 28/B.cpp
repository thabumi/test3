#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	long long res = 0;
	long long MOD = 1e9 + 7;
	for (long long i = 0; i * 3 <= n; i++) {
		long long t = n - i * 3;
		res = (res + t / 2 + 1) % MOD;
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
