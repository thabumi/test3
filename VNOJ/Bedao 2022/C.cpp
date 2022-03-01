#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, m;
	cin >> n >> m;
	if (n < m) {
		swap(n, m);
	}
	vector<int> is_prime(2000000 + 5, 1);
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i <= m + n; i++) {
		if (is_prime[i] && (long long)i * i <= m + n) {
			for (int j = i * i; j <= m + n; j += i) {
				is_prime[j] = 0;
			}
		}
	}
	long long res = 0;
	for (int i = 2; i <= m + n; i++) {
		if (is_prime[i]) {
			if (i <= m) {
				res += i - 1;
			}
			else if (i > n + 1) {
				res += m + n + 1 - i;
			}
			else {
				res += m;
			}
		}
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