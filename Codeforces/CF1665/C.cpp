#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n + 5];
	a[1] = 0;
	vector<int> v(n + 1, 0);
	v[0] = 1;
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		v[a[i]]++;
	}
	vector<int> cnt;

	for (auto t : v) {
		if (t != 0) {
			cnt.push_back(t);
		}
	}
	sort(cnt.begin(), cnt.end());
	int m = cnt.size();
	int l = m;
	int r = n;
	while (l < r) {
		int mid = (l + r) / 2;
		int k = mid - m;
		for (int i = 0; i < m; i++) {
			if (cnt[i] - (mid - (m - 1 - i)) > 0) {
				k -= cnt[i] - (mid - (m - 1 - i));
			}
		}
		if (k < 0) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}
	cout << r << '\n';
//	int res = n / 2 + 1;
//	map<int, int> m;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		if (!m[a[i]]) {
//			cnt++;
//		}
//		m[a[i]] = 1;
//	}
//	res = max(cnt, res);
//	cout << res << '\n';
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
