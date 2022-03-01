#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	multiset<int> cnt;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int t = max(max(max(i + j, i + m - 1 - j), n - 1 - i + j), n - 1 - i + m - 1 - j);
			cnt.insert(t);
		}
	}
//	for (int i = 0; i < m + n + 2; i++) {
//		cout << cnt[i] << " ";
//	}
	int i = 0;
	for (auto t : cnt) {
		cout << t << " ";
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
