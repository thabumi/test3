#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	vector<bool> v(1e6 + 1, false);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		v[a[i]] = true;
	}
	int cnt = 0;
	for (int i = 1; i <= 1e6; i++) {
		if (v[i]) {
			continue;
		}
		int d = 0;
		for (int j = i; j <= 1e6; j += i) {
			if (v[j]) {
				d = __gcd(d, j);
			}
		}
		if (d == i) {
			cnt++;
		}
	}
	cout << cnt;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
