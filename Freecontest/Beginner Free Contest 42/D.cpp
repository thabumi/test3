#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long mn[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mn[n - 1] = a[n - 1] - n + 1;
	for (int i = n - 2; i >= 0; i--) {
		mn[i] = min(mn[i + 1], a[i] - i);
	}
//	for (int i = 0; i < n; i++) {
//		cout << mn[i] << " ";
//	}
//	cout << '\n';
	long long res = 0;
	for (int i = 0; i < n; i++) {
		res += min(max(mn[i] + i, 0LL), a[i]);
	}
	cout << res;
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
