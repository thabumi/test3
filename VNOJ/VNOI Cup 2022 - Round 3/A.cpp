#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, q;
	cin >> n >> q;
	for (int i = 0; i < q; i++) { 
		long long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 == x2 && y1 == y2) {
			cout << 0 << '\n';
		}
		else if ((x1 + y1 + x2 + y2) % 2 != 0) {
			cout << -1 << '\n';
		}
		else {
			if (x1 + y1 == x2 + y2 || x1 - y1 == x2 - y2) {
				cout << 1 << '\n';
				cout << x2 << " " << y2 << '\n';
			}
			else {
				cout << 2 << '\n';
				if (x1 + (x2 + y2 - x1 - y1) / 2 >= 1 && x1 + (x2 + y2 - x1 - y1) / 2 <= n && y1 + (x2 + y2 - x1 - y1) / 2 >= 1 && y1 + (x2 + y2 - x1 - y1) / 2 <= n) {
					cout << x1 + (x2 + y2 - x1 - y1) / 2 << " " << y1 + (x2 + y2 - x1 - y1) / 2 << '\n';
				}
				else {
					long long k = ((x2 - y2) - (x1 - y1)) / 2;
					cout << x1 + k << " " << y1 - k << '\n';
				}
				cout << x2 << " " << y2 << '\n';
			}
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
