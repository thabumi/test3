#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long l = 1;
	long long r = 1e18;
	while (l < r) {
		long long mid = (l + r) / 2;
		int i = 0;
		int j = 1;
		long long sum = 0;
		while (i < n) {
			if (sum + a[i] <= mid) {
				sum += a[i];
				i++;
			}
			else {
				j++;
				sum = 0;
			}
			if (j > k) {
				break;
			}
		}
		if (j <= k) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	cout << r;
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
