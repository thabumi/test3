#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	cout << (n + 1) / 2 << '\n';
	if (n == 1) {
		cout << 1 << " " << 2 << '\n';
	}
	else if (n % 2 == 0) {
		for (int i = 1; i * 2 <= n; i++) {
			cout << i * 3 - 2 << " " << 3 * n + 1 - (i * 3 - 2) << '\n';
		}
	}
	else {
		for (int i = 1; i * 2 < n; i++) {
			cout << i * 3 - 2 << " " << 3 * n + 1 - (i * 3 - 2) << '\n';
		}
		cout << (n + 1) / 2 * 3 - 2 << " " << (n + 1) / 2 * 3 << '\n';
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
