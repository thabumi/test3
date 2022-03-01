#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, m;
	cin >> n >> m;
	long long a[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	long long k = m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
	}
	long long maxedge = 1LL * n * (n - 1) / 2;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		char c;
		cin >> c;
		if (c == '?') {
			cout << sum + (k * 2 - maxedge) << '\n';
//			k = m;
		}
		else if (c == '+') {
			int x, y;
			cin >> x >> y;
			k++;
		}
		else {
			int x, y;
			cin >> x >> y;
			k--;
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
