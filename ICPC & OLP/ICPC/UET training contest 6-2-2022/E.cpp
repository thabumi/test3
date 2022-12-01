#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	vector<bool> prime(1e7 + 1, true);
	vector<int> v;
	prime[1] = false;
	for (int i = 2; i <= 1e7; i++) {
		if (prime[i]) {
			v.emplace_back(i);
			for (long long j = ((long long)i) * i; j <= 1e7; j += i) {
				prime[j] = false;
			}
		}
	}
//	for (int i = 0; i < 5; i++) {
//		cout << v[i] << " ";
//	}
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
//		run_case();
		long long n;
		cin >> n;
		long long res = n * (n + 1) / 2 - 1;
		for (auto t : v) {
			if (t <= n) {
				res += t;
			}
		}
		cout << res - 4 << '\n';
	}
	return 0;	
}
