#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int k = a[i];
		while (k > 0) {
			if (k <= n) {
				if (m[k] == 0) {
					m[k] = i + 1;
					break;
				}
			}
			k /= 2;
		}
	}
//	for (int i = 1; i <= n; i++) {
//		cout << m[i] << " ";
//	}
//	cout << '\n';
	for (int i = 1; i <= n; i++) {
		if (!m[i]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
