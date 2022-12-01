#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = n - 2; i >= 0; i--) {
		while (a[i] >= a[i + 1]) {
			a[i] /= 2;
			cnt++;
			if (a[i] == 0 && a[i + 1] == 0) {
				cout << -1 << '\n';
				return;
			}
		}
		
	}
	cout << cnt << '\n';
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
