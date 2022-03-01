#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long x, y;
	long long a[n];
	cin >> x >> y;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long A = x;
	long long B = x + 3;
	bool even;
	if (y % 2 == 1) {
		even = false;
	}
	else {
		even = true;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			even = 1 - even;
		}
	}
	if (even) {
		if (x % 2 == 0) {
			cout << "Alice\n";
		}
		else {
			cout << "Bob\n";
		}
	}
	else {
		if (x % 2 == 0) {
			cout << "Bob\n";
		}
		else {
			cout << "Alice\n";
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
