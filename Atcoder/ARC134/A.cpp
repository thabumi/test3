#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long l, w;
	cin >> l >> w;
	long long a[n];
	long long res = 0;
	long long left = 0;
	long long r = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		r = a[i];
		if (r > left) {
			res += (r - left + w - 1) / w;
		}
		left = a[i] + w;
	}
	res += (l - left + w - 1) / w;
	cout << res;
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
