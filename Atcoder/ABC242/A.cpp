#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	cout << fixed << setprecision(14);
	if (x <= a) {
		double ans = 1.0;
		cout << ans;
		return;
	}
	else {
		if (x <= b) {
			cout << 1.0 * c / (b - a);
			return;
		}
		else {
			double ans = 0.0;
			cout << ans;
			return;
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
