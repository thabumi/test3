#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	long long k;
	cin >> n >> k;
	long long a[n + 5];
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum <= k) {
		cout << 0 << '\n';
		return;
	}
	if (n == 1) {
		cout << sum - k << '\n';
		return;
	}
	sort(a + 1, a + n + 1);
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
	long long S = sum - k;
	long long c[n + 5];
	c[n] = a[n] - a[1];
	for (int i = n - 1; i >= 1; i--) {
		c[i] = c[i + 1] + a[i] - a[1];
	}
	reverse(c + 1, c + n + 1);
//	for (int i = 1; i <= n; i++) {
//		cout << c[i] << " ";
//	}
//	cout << '\n';
//	return;
	c[0] = 0;
	long long m = 1e18;
	for (int i = n - 1; i >= 0; i--) {
		long long t = (S - c[i]) / (i + 1);
		if (t < 0) {
			t = 0;
		}
		else if ((S - c[i]) % (i + 1) != 0) {
			if (S - c[i] > 0) {
				t++;
			}
		}
//		cout << t + i << " ";
		if (m > t + i) {
			m = t + i;
		}
	}
//	cout << '\n';
	cout << m << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
