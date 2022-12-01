#include <bits/stdc++.h>

using namespace std;

void run_case() {
	long long n, a, b;
	cin >> n >> a >> b;
	long long m = a * b / __gcd(a, b);
	long long big = n / m * m;
	long long small = m;
	long long cnt = (big - small) / m + 1;
	cout << n * (n + 1) / 2 + (big + small) * cnt / 2 - (n / a * a + a) * ((n / a * a - a) / a + 1) / 2 - (n / b * b + b) * ((n / b * b - b) / b + 1) / 2;
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
