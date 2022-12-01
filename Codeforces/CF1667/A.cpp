#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long res = 1e18;
//	vector<long long> b(n);
	for (int i = 0; i < n; i++) {
//		b[i] = 0;
		long long mn = 0;
		long long move = 0;
		for (int j = i - 1; j >= 0; j--) {
			long long k = (-mn / a[j]) + 1;
			move += k;
			mn = -k * a[j];
//			b[j] = mn;
		}
		long long mx = 0;
		for (int j = i + 1; j < n; j++) {
			long long k = mx / a[j] + 1;
			move += k;
			mx = k * a[j];
//			b[j] = mx;
		}
//		for (int j = 0; j < n; j++) {
//			cout << b[j] << " ";
//		}
//		cout << '\n';
		res = min(res, move);
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
