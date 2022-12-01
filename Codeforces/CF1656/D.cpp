#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	long long N = n;
	if (n % 2 == 1) {
		cout << 2 << '\n';
		return;
	}
	if (n == 2 || n == 4) {
		cout << -1 << '\n';
		return;
	}
	long long Pow = 1;
	while (n % 2 == 0) {
		n /= 2;
		Pow *= 2;
	}
	if (n >= Pow * 2 + 1) {
		cout << Pow * 2 << '\n';
//		return;
	}
	else if (n == 1) {
		cout << -1 << '\n';
	}
	else {
		cout << n << '\n';
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
