#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long y, x;
	cin >> y >> x;
	long long k = max(x, y);
	long long st = (k - 1) * (k - 1);
	if (k % 2 == 0) {
		if (y == k) {
			cout << st + k + k - x << '\n';
		}
		else {
			cout << st + y << '\n';
		}
	}
	else {
		if (y == k) {
			cout << st + x << '\n';
		}
		else {
			cout << st + k + k - y << '\n';
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
