#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	long long sum[n + 1];
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	
	for (int i = 0; i < q; i++) {
		long long x;
		cin >> x;
		int t = (int)(upper_bound(a + 1, a + n + 1, x) - a) - 1;
//		cout << t << '\n';
		cout << x * t - sum[t] + (sum[n] - sum[t]) - x * (n - t) << '\n';
	}
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
