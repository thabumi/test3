#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> v(n);
	vector<int> t(m);
	for (int i = 0; i < n; i++) {
		cin >> v[i].second >> v[i].first;
	}
	for (int i = 0; i < m; i++) {
		cin >> t[i];
	}
	sort(t.begin(), t.end());
	sort(v.begin(), v.end());
	int l = 0;
	int r = min(m, n);
	while (l < r) {
		int mid = (l + r + 1) / 2;
		int i = 0;
		int j = m - mid;
		int mx = -1e9;
		while (i < n && j < m) {
			if (max(v[i].second, mx) <= t[j]) {
				j++;
				mx = max(v[i].second, mx);
			}
			i++;
		}
		if (j == m) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l;
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
