#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int mn = 0;
	int mx = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] == 1) {
			continue;			
		}
		else {
			mn += a[i];
		}
	}
	int j = n - 1;
	int cnt = 0;
	while (cnt < k) {
		if (a[j] == 1) {
			cnt++;
			j--;
			continue;
		}
		else {
			cnt++;
			mx += a[j];
			j--;
		}
	}
	cout << mn << " " << mx;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;
}