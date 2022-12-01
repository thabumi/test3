#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
//		cout << a[i];
	}
//	return;
	
	long long mx = 0;
	for (int i = 0; i < (1 << n); i++) {
		long long w = 0;
		long long b = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				w ^= a[j];
			}
			else {
				b ^= a[j];
			}
		}
		mx = max(mx, b + w);
	}
	cout << mx;
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
