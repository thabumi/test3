#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	pair<int, int> p[n];
	int res[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		p[i] = {a[i], i};
	}
	sort(p, p + n);
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		int it = p[i].second;
//		cout << it << " ";
		int t = (int)(upper_bound(a, a + n, p[i].first * 2) - a);
		t--;
		if (t < 0) {
			res[it] = -1;
			continue;
		}
		else if (a[t] == p[i].first) {
			auto pp = equal_range(a, a + n, a[t]);
			if ((int)(pp.second - pp.first) > 1) {
				res[it] = a[t];
			}
			else {
				t--;
				if (t < 0) {
					res[it] = -1;
					continue;
				}
				else {
					res[it] = a[t];
				}
			}
		}
		else {
			res[it] = a[t];
		}
	}
//	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << res[i] << " ";
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
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
