#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int d[n];
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	int a[n];
	a[0] = d[0];
	for (int i = 1; i < n; i++) {
		if (a[i - 1] >= d[i] && d[i] != 0) {
			cout << -1 << '\n';
			return;
		} 
		a[i] = a[i - 1] + d[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
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
