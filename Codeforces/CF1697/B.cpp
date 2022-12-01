#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	long long p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, p + n, greater<long long>());
	long long sum[n];
	sum[0] = p[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + p[i];
	}
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		if (x == y) {
			cout << sum[x] << '\n';
		}
//		if (x - y - 1 == 0) {
//			cout << sum[x] << '\n';
//		}
		else {
			cout << sum[x] - sum[x - y - 1] << '\n';
		}
		
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
