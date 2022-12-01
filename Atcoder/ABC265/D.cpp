#include <bits/stdc++.h>
 
using namespace std;
#define int long long
void run_case() {
	int n;
	cin >> n;
	long long p, q, r;
	cin >> p >> q >> r;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long pref[n + 1];
	pref[0] = 0;
	for (int i = 1; i <= n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}
	for (int i = 1; i <= n; i++) {//x = i
		long long k = pref[i - 1];
		int t = (int)(lower_bound(pref, pref + n + 1, p + k) - pref);//y = t + 1
//		cout << t << " ";
		if (t == n + 1) {
			continue;
		}
		else if (pref[t] != p + k) {
			continue;
		}
		else {
			int u = (int)(lower_bound(pref, pref + n + 1, p + q + k) - pref);
//			cout << u << " ";
			if (u == n + 1) {
				continue;
			}
			else if (pref[u] != p + q + k) {
				continue;
			}
			else {
				int v = (int)(lower_bound(pref, pref + n + 1, p + q + r + k) - pref);
//				cout << v << " ";
				if (v == n + 1) {
					continue;
				}
				else if (pref[v] != p + q + r + k) {
					continue;
				}
				else {
					cout << "Yes";
					return;
				}
			}
		}
	}
	cout << "No";
}

signed main() {
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
