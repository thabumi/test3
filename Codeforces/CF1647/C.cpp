#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	char c[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
		}
	}
	if (c[0][0] == '1') {
		cout << -1 << '\n';
		return;
	}
	vector<vector<int>> ans;
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < m; j++) {
			if (c[i][j] == '1') {
				vector<int> v = {i, j + 1, i + 1, j + 1};
				ans.push_back(v);
			}
		}
	}
	for (int j = m - 1; j >= 1; j--) {
		if (c[0][j] == '1') {
			vector<int> v = {1, j, 1, j + 1};
			ans.push_back(v);
		}
	}
	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); i++) {
		for (auto t : ans[i]) {
			cout << t << " ";
		}
		cout << '\n';
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
