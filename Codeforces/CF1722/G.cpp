#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n % 4 == 0) {
		for (int i = 4; i < n + 4; i++) {
			if (i % 4 == 0) {
				cout << i << " ";
			}
			else if (i % 4 == 1) {
				cout << i << " ";
			}
			else if (i % 4 == 2) {
				cout << i + 1 << " ";
			}
			else {
				cout << i - 1 << " ";
			}
		}
	}
	else if (n % 4 == 1) {
		for (int i = 4; i < n + 4 - 1; i++) {
			if (i % 4 == 0) {
				cout << i << " ";
			}
			else if (i % 4 == 1) {
				cout << i << " ";
			}
			else if (i % 4 == 2) {
				cout << i + 1 << " ";
			}
			else {
				cout << i - 1 << " ";
			}
		}
		cout << 0;	
	}
	else if (n % 4 == 3) {
		for (int i = 4; i < n + 4 - 3; i++) {
			if (i % 4 == 0) {
				cout << i << " ";
			}
			else if (i % 4 == 1) {
				cout << i << " ";
			}
			else if (i % 4 == 2) {
				cout << i + 1 << " ";
			}
			else {
				cout << i - 1 << " ";
			}
		}
		cout << 1 << " " << 3 << " " << 2;
	}
	else if (n % 4 == 2) {
		cout << "4 1 2 12 3 8 ";
		for (int i = 16; i < n + 16 - 6; i++) {
			if (i % 4 == 0) {
				cout << i << " ";
			}
			else if (i % 4 == 1) {
				cout << i << " ";
			}
			else if (i % 4 == 2) {
				cout << i + 1 << " ";
			}
			else {
				cout << i - 1 << " ";
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
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
