#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	if (n % 2 != 0 || n < 4) {
		cout << -1 << '\n';
		return;
	}
	if (n % 6 == 0) {
		cout << n / 6 << " ";
	}
	else if (n % 6 == 2) {
		cout << 2 + (n - 8) / 6 << " ";
	}
	else {
		cout << 1 + (n - 4) / 6 << " ";
	}
	if (n % 4 == 0) {
		cout << n / 4 << '\n';
	}
	else {
		cout << 1 + (n - 6) / 4 << '\n';
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
