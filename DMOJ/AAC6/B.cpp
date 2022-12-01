#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	int res[n + 5];
	for (int i = 1; i <= n; i++) {
		res[i] = i;
	}
	int mx = 1;
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		mx = max(mx, y - x + 1);
	}
	for (int i = 1; i <= n; i++) {
		res[i] = res[i] % mx;
		if (res[i] == 0) {
			res[i] = mx;
		}
	}
	cout << mx << '\n';
	for (int i = 1; i <= n - 1; i++) {
		cout << res[i] << " ";
	}
	cout << res[n] << '\n';
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
