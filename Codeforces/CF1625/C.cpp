#include <bits/stdc++.h>
 
using namespace std;
#define int long long
void run_case() {
	int n, l, k;
	cin >> n >> l >> k;
	
	vector<int> a(n + 1, l);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> d(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	
	for (int i = 0; i < k; i++) {
		bool notOK = false;
		int imp = 0;
		int ind = -1;
		for (int j = 0; j < d.size() - 1; j++) {
			if (d[j] < d[j + 1]) {
//				cout << d[j] << " " << d[j + 1] << '\n';
				notOK = true;
				if ((a[j + 2] - a[j + 1]) * (d[j + 1] - d[j]) > imp) {
					imp = (a[j + 2] - a[j + 1]) * (d[j + 1] - d[j]);
					ind = j + 1;
				}
			}
		}
//		cout << ind << "\n";
		if (notOK) {
			d.erase(d.begin() + ind);
			a.erase(a.begin() + ind);
		}
//		for (int t = 0; t < d.size(); t++) {
//			cout << d[t] << " ";
//		}
//		cout << '\n';
	}
//	cout << '\n';
	int res = 0;
	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " " << a[i] << '\n';
		res += (a[i + 1] - a[i]) * d[i];
	}
	cout << res << '\n';
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
