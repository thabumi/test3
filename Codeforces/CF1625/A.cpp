#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	int l;
	cin >> n >> l;
	vector<int> a(n);
	vector<int> cnt(l, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < l; j++) {
			if (a[i] & (1 << j)) {
				cnt[j]++;
			}
		}
	}
//	for (int i = 0; i < l; i++) {
//		cout << cnt[i] << " ";
//	} 
//	cout << '\n';
//	return;
	int res = 0;
	for (int i = l - 1; i >= 0; i--) {
		res *= 2;
		if (n - cnt[i] < cnt[i]) {
			res++;
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
