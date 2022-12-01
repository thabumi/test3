#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, x;
	cin >> n >> x;
	long long a[n];
	long long res = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		long long k = (x - 1) / a[i];
		long long beg = a[i];
		long long en = a[i] * k;
		res += (en + beg) * k / 2;
	}
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
