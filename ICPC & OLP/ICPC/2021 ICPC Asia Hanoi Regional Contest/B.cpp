#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	double res = 1.0 * (n - 1) * (n - 2) / 2;
	cout << fixed <<  setprecision(12) << res << '\n';
	for (int i = 2; i <= n; i++) {
		cout << 1 << " " << i << '\n';
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
