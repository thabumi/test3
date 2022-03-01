#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n + 1];
	int cnt1 = 0;
	int cnteven = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 3 && a[2] % 2 == 1) {
		cout << -1 << '\n';
		return;
	}
	for (int i = 2; i < n; i++) {
		if (a[i] == 1) {
			cnt1++;
		}
	}
	
	if (cnt1 == n - 2) {
		cout << -1 << '\n';
		return;
	}
	long long res = 0;
	for (int i = 2; i < n; i++) {
		res += (a[i] + 1) / 2;
	}
	cout << res << '\n';
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
