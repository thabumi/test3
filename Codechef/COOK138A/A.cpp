#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	
	if ((n - k) % 2 == 0) {
		for (int i = 1; i <= k; i++) {
			cout << i << " ";
		}
		for (int i = k + 1; i <= n; i++) {
			if ((i - k - 1) % 2 == 0) {
				cout << i + 1 << " ";
			}
			else {
				cout << i - 1 << " ";
			}
		}
	}
	else {
		cout << n << " ";
		for (int i = 2; i <= k; i++) {
			cout << i << " ";
		}
		for (int i = k + 1; i <= n - 1; i++) {
			if ((i - k - 1) % 2 == 0) {
				cout << i + 1 << " ";
			}
			else {
				cout << i - 1 << " ";
			}
		}
		cout << 1 << " ";
	}
	cout << '\n';
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
