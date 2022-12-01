#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, need, q;
	cin >> n >> need >> q;
	long long a[q + 1], val[q + 1];
	for (int i = 0; i < q; i++) {
		cin >> a[i] >> val[i];
	}
	a[q] = 1;
	val[q] = 1e9;
	long long l = 1, r = q + 1;
	while (l < r) {
		long long mid = (l + r) / 2;
		vector<long long> best(n, 0);
		for (int i = 0; i < mid; i++) {
			best[a[i] - 1] = max(best[a[i] - 1], val[i]);
		}
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += best[i];
		}
		if (sum >= need) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	if (r >= 1 && r <= q) {
		cout << r;
	}
	else {
		cout << -1;
	}
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
