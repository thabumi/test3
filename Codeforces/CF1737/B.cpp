#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long l, r;
	cin >> l >> r;
	long long m = sqrt(l), n = sqrt(r);
	long long res = 0;
	if (m == n) {
		if (l % m == 0) {
			res += r / m - l / m + 1;
		}
		else {
			res += r / m - l / m;
		}
//		if (l <= m * m && m * m <= r) {
//			res++;
//		}
//		
//		if (l <= m * (m + 1) && m * (m + 1) <= r) {
//			res++;
//		}
//		if (l <= m * (m + 2) && m * (m + 2) <= r) {
//			res++;
//		}
	}
	else {
		res += 3 * (n - m - 1);
//		if (l <= m * m) {
//			res++;
//		}
//		if (l <= m * (m + 1)) {
//			res++;
//		}
//		if (l <= m * (m + 2)) {
//			res++;
//		}
		if (l % m == 0) {
			res += m + 2 - l / m + 1;
		} 
		else {
			res += m + 2 - l / m;
		}
		res += (r / n - n + 1);
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
