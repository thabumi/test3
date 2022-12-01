#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a, b;
	cin >> a >> b;
	long long t[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	long long l = 1;
	long long r = 1e9;
	while (l < r) {
		long long mid = (l + r + 1) / 2;
		long long k = 0;
		for (int i = 0; i < n; i++) {
			if (t[i] > mid) {
				k += (t[i] - mid) / b;
			}
			if (t[i] < mid) {
				k -= (mid - t[i] + a - 1) / a;
			}
		}
		if (k >= 0) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l;
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
