#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, x, y;
	cin >> n >> x >> y;
	if (x != 0 && y != 0) {
		cout << -1 << '\n';
		return;
	}
	if (x == y) {
		cout << -1 << '\n';
		return;
	}
	if (x > y) {
		swap(x, y);
	}
	if (x != 0) {
		cout << -1 << '\n';
		return;
	}
	if (y == 1) {
		for (int i = 2; i <= n; i++) {
			cout << i << " ";
		}
		cout << '\n';
		return;
	}
	if ((n - 1) % y == 0) {
		for (int i = y; i <= n; i += y) {
			for (int j = 0; j < y; j++) {
				cout << i - y + 2 << " ";
			}
		}
		cout << '\n';
	}
	else {
		cout << -1 << '\n';
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
