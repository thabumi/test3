#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1e9 + 7;

void run_case() {
	int n, m;
	cin >> n >> m;
	long long a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		int C, X;
		cin >> C >> X;
		for (int j = 0; j < X; j++) {
			long long x, y;
			cin >> x >> y;
			a[y] = (a[y] + x * a[C]) % MOD;
		} 
		a[C] = 0;
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << '\n';
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
