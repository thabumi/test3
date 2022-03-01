#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	long long w, h;
	cin >> w >> h;
	long long res = -1;
	for (int i = 0; i < 4; i++) {
		int k;
		cin >> k;
		long long a[k];
		for (int j = 0; j < k ; j++) {
			cin >> a[j];
		}
		sort(a, a + k);
		if (i < 2) {
			res = max(res, h * (a[k - 1] - a[0]));
		}
		else {
			res = max(res, w * (a[k - 1] - a[0]));
		}
	}
	cout << res << '\n';
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
