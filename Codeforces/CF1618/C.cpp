#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long d1 = a[0];
	long long d2 = a[1];
	for (int i = 0; i < n; i += 2) {
		d1 = __gcd(d1, a[i]);
	}
	for (int i = 1; i < n; i += 2) {
		d2 = __gcd(d2, a[i]);
	}
	bool b1 = true;
	bool b2 = true;
	for (int i = 1; i < n; i += 2) {
		if (a[i] % d1 == 0) {
			b1 = false;
			break;
		}
	}
	for (int i = 0; i < n; i += 2) {
		if (a[i] % d2 == 0) {
			b2 = false;
			break;
		}
	}
//	cout << d1 << " " << d2 << '\n';
//	cout << b1 << " " << b2 << '\n';
	if (b1) {
		cout << d1 << '\n';
	}
	else if (b2) {
		cout << d2 << '\n';
	}
	else {
		cout << 0 << '\n';
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


