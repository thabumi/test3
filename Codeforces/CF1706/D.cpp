#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int a[n];
	int mn = 1e9;
	int mx = -1e9;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mn = min(a[i], mn);
		mx = max(a[i], mx);
	}
	int l = 0;
	int r = mx - mn;
	while (l < r) {
		int mid = (l + r) / 2;
//		cout << mid << '\n';
		bool ok = false;
		for (int i = 0; i + mid <= a[n - 1]; i++) {
			bool b = true;
			int l = i, r = i + mid;
//			cout << l << " " << r << '\n';
			for (int j = 0; j < n; j++) {
				int rr;
				if (l == 0) {
					rr = 1e9;
				}
				else {
					rr = a[j] / l;
				}
				int ll = a[j] / (r + 1) + 1;
//				if (a[j] % (r + 1) == 0) {
//					ll++;
//				}
//				cout << a[j] << " " << ll << " " << rr << '\n';
				if (ll <= rr && ll <= k) {
					
				}
				else {
					b = false;
					break;
				}
			}
			if (b) {
				ok = true;
				break;
			}
		}
		if (ok) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	cout << r << '\n';
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
