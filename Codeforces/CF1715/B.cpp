#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, k, b, s;
	cin >> n >> k >> b >> s;
	long long t = b * k;
	if (t > s) {
		cout << -1 << '\n';
		return;
	}	
	long long remain = s - t;
	if (remain > (k - 1) * n) {
		cout << -1 << '\n';
		return;
	}
	if (k == 1) {
		if (b != s) {
			cout << -1 << '\n';
		}
		else {
			for (int i = 1; i < n - 1; i++) {
				cout << 0 << " ";
			}
			cout << s << '\n';
			return;
		}
	}
	long long res[n];
	long long sum = 0;
	for (int i = 0; i < n - 1; i++) {
		if (remain >= k - 1) {
			res[i] = k - 1;
			remain -= k - 1;
			sum += k - 1;
		}
		else {
			res[i] = remain;
			remain = 0;
			sum += res[i];
		}
	}
	res[n - 1] = s - sum;
	for (int i = 0; i < n; i++) {
		cout << res[i] << " ";
	}
	cout << '\n';
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
