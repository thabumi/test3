#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long x, y;
	cin >> x >> y;
	if (x == y) {
		if (x % 2 == 0) {
			cout << (x / 2) * x + x / 2;
		}
		else {
			cout << (x * x + 1) / 2;
		}
	}
	else {
		if (x < y) {
			if (x % 2 == 0) {
				cout << (x / 2) * y + (x - 2) / 2 + 1;
			}
			else {
				cout << (x / 2) * y + (y - x / 2);
			}
		}
		else {
			if (y % 2 == 0) {
				cout << y / 2 * y + y / 2;
			}
			else {
				cout << (x - y / 2 - 1) * y + (y + 1) / 2;
			}
		}
	}
	cout << '\n';
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
		cout << "Test #" << i << ": ";
		run_case();
	}
	return 0;	
}
