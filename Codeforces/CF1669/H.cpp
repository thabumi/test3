#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> cnt(31, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 30; j >= 0; j--) {
			if (a[i] & (1LL << j)) {
				continue;
			}
			cnt[j]++;
		}
	}
//	for (auto t : cnt) {
//		cout << t << " ";
//	}
//	cout << '\n';
//	return;
	long long res = 0;
	for (int i = 30; i >= 0; i--) {
		if (cnt[i] <= k) {
			k -= cnt[i];
			cnt[i] = 0;
			
		}
		if (cnt[i] == 0) {
			res |= (1LL << i);
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
