#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int b[n + 1];
	for (int i = 1; i <= n; i++) {
		b[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			b[a[i - 1]] = i + 1; 
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << b[i] << ' ';
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
