#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	if (a[n - 1] != b[0]) {
		for (int i = 0; i < n; i++) {
			cout << 'a';
		}
		for (int i = 0; i < n; i++) {
			cout << 'b';
		}
	}
	else if (a[0] != b[n - 1]) {
		for (int i = 0; i < n; i++) {
			cout << 'b';
		}
		for (int i = 0; i < n; i++) {
			cout << 'a';
		}
	}
	else {
		cout << 'a';
		for (int i = 0; i < n; i++) {
			cout << 'b';
		}
		for (int i = 0; i < n - 1; i++) {
			cout << 'a';
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
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
