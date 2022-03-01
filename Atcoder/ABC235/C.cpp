#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	int a[n + 5];
	map<pair<int, int>, int> m;
	map<int, int> cnt;
	for (int i = 0; i < n; i++) {
		cin >> a[i + 1];
		cnt[a[i + 1]]++;
		m[{a[i + 1], cnt[a[i + 1]]}] = i + 1;
	}
	for (int i = 0; i < q; i++) {
		int x, k;
		cin >> x >> k;
		if (m[{x, k}]) {
			cout << m[{x, k}] << '\n';
		}
		else {
			cout << -1 << '\n';
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
