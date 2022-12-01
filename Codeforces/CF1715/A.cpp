#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	if (n == 1 && m == 1) {
		cout << 0 << '\n';
		return;
	}
	if (n == 1) {
		cout << m << '\n';
		return;
	}
	if (m == 1) {
		cout << n << '\n';
		return;
	}
	cout << (m - 1) + (n - 1) + min(m, n) << '\n';
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
