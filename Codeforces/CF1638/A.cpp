#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	int beg = 0;
	while (beg < n && a[beg] == b[beg]) {
		cout << a[beg] << " ";
		beg++;
	}
	if (beg == n) {
		cout << '\n';
		return;
	}
	int mn = a[n - 1];
	int ind = n - 1;
	for (int i = n - 1; i >= beg; i--) {
		if (mn > a[i]) {
			mn = a[i];
			ind = i;
		}
	}
	for (int i = ind; i >= beg; i--) {
		cout << a[i] << " ";
	}
	for (int i = ind + 1; i < n; i++) {
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
