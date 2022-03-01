#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, x, t;
	cin >> n >> x >> t;
	long long k = t / x;
	if (k > n) {
		cout << (n - 1) * n / 2 << '\n';
		return;
	}
	cout << (n - k) * k + (k - 1) * k / 2 << '\n';
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
