#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	long long k = (n - 1) / 2;
	if (k == 0) {
		cout << 0 << '\n';
		return;
	}
	for (int i = 63; i >= 0; i--) {
		if (k & (1LL << i)) {
			long long res = 1LL << i;
			for (int j = 0; j < i; j++) {
				res |= (1LL << j);
			}
			cout << res << '\n';
			return;
		}
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
