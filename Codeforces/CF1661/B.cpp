#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			cout << 0 << " ";
			continue;
		}
		int res = 15;
		for (int j = 0; j <= 15; j++) {
			int k = a[i] + j;
			int cnt = 0;
			while (k % 2 == 0) {
				k /= 2;
				cnt++;
			}
			res = min(res, 15 - cnt + j);
		}
		cout << res << " ";
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
