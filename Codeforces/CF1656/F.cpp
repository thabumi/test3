#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
	long long sum[n + 5];
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	if ((n - 2) * a[n] + sum[n] < 0 || (n - 2) * a[1] + sum[n] > 0) {
		cout << "INF\n";
		return;
	} 
	long long mx = -1e18;
	for (int i = n - 1; i >= 1; i--) {
		long long y[2] = {-a[i + 1], -a[i]};
		for (int j = 0; j < 2; j++) {
			mx = max(mx, (a[n] + y[j]) * (i * y[j] + sum[i]) + (a[1] + y[j]) * ((n - 1 - i) * y[j] + sum[n - 1] - sum[i]) - y[j] * y[j] * (n - 1));
//			if (mx == 0) {
//				cout << i << " " << y[j] << " " << sum[i] << '\n';
//				return;
//			}
		}
	}
	cout << mx << '\n';
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
