#include <bits/stdc++.h>
 
using namespace std;

#define int long long

void run_case() {
	int n, m, t;
	cin >> n >> m >> t;
	int time[n + 5];
	for (int i = 1; i < n; i++) {
		cin >> time[i];
	}
	map<int, int> mp;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		mp[x] += y;
	}
	for (int i = 1; i <= n - 1; i++) {
		t -= time[i];
		if (t <= 0) {
			cout << "No\n";
			return;
		}	
		t += mp[i + 1];
//		cout << t << " ";
	}
	cout << "Yes\n";
}

signed main() {
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
