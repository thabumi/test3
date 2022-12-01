#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, x;
	cin >> n >> x;
	int a[2 * n];
	for (int i = 0; i < 2 * n; i++) {
		cin >> a[i];
	}
	sort(a, a + 2 * n);
	for (int i = 0; i < n; i++) {
		if (a[i] > a[i + n] - x) {
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
