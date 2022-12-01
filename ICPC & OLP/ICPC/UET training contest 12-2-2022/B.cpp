#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	double res = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (a[i] > i + 1) {
			cout << -1;
			return;
		}
		res = min(res, 1.0 * a[i] / (i + 1));
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
