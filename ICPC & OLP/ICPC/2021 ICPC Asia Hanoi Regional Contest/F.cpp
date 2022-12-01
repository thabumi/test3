#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1e9 + 7;

long long binPow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = binPow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	int n, k;
	cin >> n >> k;
	cout << (n - k + 1) * binPow(2, k - 1) % MOD;
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
