#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m, sx, sy, d;
	cin >> n >> m >> sx >> sy >> d;
	int N = sx - d;
	int E = sy + d;
	int W = sy - d;
	int S = sx + d;
	if ((N <= 1 && W <= 1) || (S >= n && E >= m) || (N <= 1 && S >= n) || (W <= 1 && E >= m)) {
		cout << -1 << '\n';
		return;
	}
	cout << n + m - 2 << '\n';
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
