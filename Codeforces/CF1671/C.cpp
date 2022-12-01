#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long x;
	cin >> x;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long pref[n];
	pref[0] = a[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}
	long long res = 0;
	for (int i = 0; i < n; i++)	{
		long long l = 0;
		long long r = 1e9;
		while (l < r) {
			long long mid = (l + r + 1) / 2;
			if ((i + 1) * (mid - 1) > x) {
				r = mid - 1;
				continue;
			}
			if (x < pref[i]) {
				r = mid - 1;
				continue;
			}
			if (pref[i] + (i + 1) * (mid - 1) <= x) {
				l = mid;
			}
			else {
				r = mid - 1;
			}
		}
//		cout << l << '\n';
		res += l;
	}
//	cout << '\n';
	cout << res << '\n';
//	cout << '\n';
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
