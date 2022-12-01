#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long l, r, a;
	cin >> l >> r >> a;
	if (a == 1) {
		cout << r << '\n';
		return;
	}
	long long t = r % a;
	if (t == a - 1) {
		cout << r / a + r % a << '\n';
		return;
	}
	long long k = r / a;
	if (l <= k * a - 1) {
		cout << k - 1 + a - 1 << '\n';
	}
	else {
		cout << r / a + r % a << '\n';
	}
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
