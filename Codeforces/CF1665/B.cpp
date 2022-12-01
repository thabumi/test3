#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	int mn = 1e9;
	for (int i = 0; i < n; i++) {
		int cnt = m[a[i]];
		int res = 0;
		while (cnt < n) {
			res++;
			if (cnt * 2 < n) {
				res += cnt;
				cnt *= 2;
			}
			else {
				res += n - cnt;
				cnt = n;
			}
		}
		mn = min(mn, res);
	}
	cout << mn << '\n';
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
