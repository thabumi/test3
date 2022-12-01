#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long pref[n];
	pref[0] = a[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}
	long long suff[n];
	suff[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		suff[i] = suff[i + 1] + a[i];
	}
	int res = 0;
	for (int i = 1; i < n; i++) {
		int l = 0;
		int r = i - 1;
		while (l < r) {
			int mid = (l + r) / 2;
			if (pref[mid] >= suff[i]) {
				r = mid;
			}
			else {
				l = mid + 1;
			}
		}
//		cout << l << '\n';
		if (pref[l] == suff[i]) {
			res = max(res, l + 1 + n - i);
		}
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
