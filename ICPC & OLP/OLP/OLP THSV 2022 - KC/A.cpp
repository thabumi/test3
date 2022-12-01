#include <bits/stdc++.h>

using namespace std;

void run_case() {
	long long l, r, a, k;
	cin >> l >> r >> a >> k;
	long long d = __gcd(a, k);
	k /= d;
	cout << r / k - (l - 1) / k;
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
