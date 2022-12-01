#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(b, b + m);
	long long cnt1 = 0;
	long long cnt2 = 0;
	for (int i = 0; i < n; i++) {
		int t = (int)(lower_bound(b, b + m, a[i]) - b);
		cnt1 += t;
		auto r = equal_range(b, b + m, a[i]);
		cnt2 += r.second - r.first;
	}
	long long all = m * n;
//	cout << cnt1 << '/' << all << '\n';
//	cout << cnt2 << '/' << all << '\n';
	
	long long d1 = __gcd(cnt1, all);
	cout << cnt1 / d1 << '/' << all / d1 << '\n';
	long long d2 = __gcd(cnt2, all);
	cout << cnt2 / d2 << '/' << all / d2 << '\n';
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
