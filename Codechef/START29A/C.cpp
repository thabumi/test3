#include <bits/stdc++.h>
 
using namespace std;


void run_case() {
	int n, q;
	cin >> n >> q;
	string s, t;
	cin >> s >> t;
	s = ' ' + s;
	t = ' ' + t;
	int dif[n + 5];
	for (int i = 1; i <= n; i++) {
		dif[i] = t[i] - s[i];
		if (dif[i] < 0) {
			dif[i] += 26;
		}
	}
	long long sum[n + 5];
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		if (i & 1) {
			sum[i] = sum[i - 1] + dif[i];
		}
		else {
			sum[i] = sum[i - 1] - dif[i];
		}
		
	}
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
//		if (l == 1 && r == n) {
//			if (sum[r] - sum[l - 1] == 0) {
//				cout << "Yes\n";
//			}
//			else {
//				cout << "No\n";
//			}
//		}
//		else {
//			cout << "Yes\n";
//		}
//		cout << sum[r] << " " << sum[l - 1] << " ";
		if ((sum[r] - sum[l - 1]) % 26 == 0) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
