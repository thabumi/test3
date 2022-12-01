#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt += a[i];
	}	
//	cout << n - 1 << " " << n - cnt << '\n';
//	for (int i = n - 1; i >= n - cnt; i--) {
//		cnt -= a[i];
//	}
	for (int i = n - cnt; i < n; i++) {
		cnt -= a[i];
	}
	cout << cnt << '\n';
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
