#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(i);
	}
	
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		--x;
		auto it = s.find(x);
		if (it != s.end()) {
			s.erase(s.find(x));
		}
		
		for (auto t : s) {
			cout << a[t] << " ";
		}
		cout << '\n';
	}
}
int32_t main() {
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
