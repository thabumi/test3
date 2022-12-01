#include <bits/stdc++.h>
 
using namespace std;
vector<bool> prime;
vector<int> v;
void run_case() {
	
	
	
	int n = v.size();
	vector<int> A(n, 0);
	vector<int> B(n, 0);
	int a, b;
	cin >> a >> b;
	
	a--;
	for (int i = 0; i < n; i++) {
		long long base = v[i];
		while (a >= base || b >= base) {
			A[i] += a / base;
			B[i] += b / base;
			base *= v[i];
		}
	}
//	return;
	long long MOD = 1e9 + 7;
	long long res = 1;
	for (int i = 0; i < n; i++) {
		res = res * (2 * (B[i] - A[i]) + 1) % MOD;
	}
	cout << res << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	prime.assign(1e6 + 1, true);
	
	prime[1] = false;
	for (int i = 2; i <= 1e6; i++) {
		if (prime[i]) {
			v.emplace_back(i);
			for (long long j = ((long long)i) * i; j <= 1e6; j += i) {
				prime[j] = false;
			}
		}
	}
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
