#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long mn = 1e18;
	long long mx = -1e18;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] = abs(a[i]);
		if (i % 2 == 0) {
			mn = min(mn, a[i]);
			sum += a[i];
		}
		else {
			mx = max(mx, a[i]);
			sum -= a[i];
		}
	}
	sum += 2 * max(mx - mn, 0LL);
	cout << sum << '\n';
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
