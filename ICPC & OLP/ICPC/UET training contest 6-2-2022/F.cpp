#include <bits/stdc++.h>
 
using namespace std;

pair<bool, int> check(int a[], int n, int k, int val) {
	int cur = 0;
	if (k > n) {
		return {false, -1};
	}
	for (int i = 0; i < k; i++) {
		cur ^= a[i];
	}
	if (cur >= k) {
		return {true, 0};
	}
	for (int i = 1; i + k - 1 < n; i++) {
		cur = (cur ^ a[i - 1]) ^ a[i + k - 1];
		if (cur >= k) {
			return {true, i};
		}
	}
	return {false, -1};
}

void run_case() {
	int n;
	cin >> n;
	int k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l = 0;
	int r = n;
	while (l < r) {
		int mid = (l + r + 1) / 2;
		if (check(a, n, mid, k).first) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	if (l == 0) {
		cout << -1 << '\n';
		return;
	}
	int res = check(a, n, l, k).second;
	cout << res + 1 << " " << res + l << '\n'; 
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
