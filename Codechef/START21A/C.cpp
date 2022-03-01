#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	long long a[n + 5];
	long long S = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		S += a[i];
	}
	sort(a + 1, a + n + 1);
	long long T = S - (a[(n + 1) / 2] * n);
	if (T <= 0) {
		cout << -T << '\n';
		return;
	}
	for (long long k = T / (n - 1); ; k++) {
		if ((T + k) % n == 0 && (T + k) <= k * n) {
//			a[1] += k - (T + k) / n;
//			a[(n + 1) / 2] += (T + k) / n;
//			for (int i = 1; i <= 5; i++) {
//				cout << a[i] << " ";
//			}
//			cout << '\n';
			cout << k << '\n';
			return;
		}
	}
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
