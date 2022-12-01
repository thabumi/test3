#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long mx = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(a[i], mx);
	}
	long long cnt = 0;
	long long needed = 0;
	for (int i = 0; i < n; i++) {
		if ((mx - a[i]) % 2 != 0) {
			cnt++;
		}
		needed += (mx - a[i]);
	}
	long long l = 0;
	long long r = 1e18;
	while (l < r) {
		long long mid = (l + r) / 2;
		long long one = (mid + 1) / 2;
		long long two = mid - one;
		if (one + 2 * two >= needed && one >= cnt) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	mx++;
	cnt = n - cnt;
	needed += n;
	long long l1 = 0;
	long long r1 = 1e18;
	while (l1 < r1) {
		long long mid = (l1 + r1) / 2;
		long long one = (mid + 1) / 2;
		long long two = mid - one;
		if (one + 2 * two >= needed && one >= cnt) {
			r1 = mid;
		}
		else {
			l1 = mid + 1;
		}
	}
//	cout << r << " " << r1 << '\n';
	cout << min(r, r1) << '\n';
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
