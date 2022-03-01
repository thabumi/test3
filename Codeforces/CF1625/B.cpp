#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<int>> v(150005, vector<int>());
	for (int i = 0; i < n; i++) {
		v[a[i]].emplace_back(i);
	}
	int mx = -1;
	for (int i = 1; i <= 150000; i++) {
		if (v[i].size() <= 1) {
			continue;
		}
		for (int j = 0; j < v[i].size() - 1; j++) {
			mx = max(mx, v[i][j] + n - 1 - v[i][j + 1] + 1);
		}
		
//		mx = max(mx, min(v[i][ind] + n - 1 - v[i][ind + 1] + 1, min(n - 1 - v[i][ind], v[i][ind + 1])));
	}
	cout << mx << '\n';
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
