#include <bits/stdc++.h>

using namespace std;

char f(char c) {
	return '1' - c + '0';
}

void run_case() {
	int n, m;
	cin >> n >> m;
	char a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	vector<vector<pair<int, int>>> res;
	char target = '0';
	// n*m->2*m
	for (int i = n - 1; i >= 2; i--) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != '0') {
				res.push_back({{i, j}, {i - 1, j}, {i - 1, j + 1}});
				a[i][j] = f(a[i][j]);
				a[i - 1][j] = f(a[i - 1][j]);
				a[i - 1][j + 1] = f(a[i - 1][j + 1]);
			}
		}
		if (a[i][m - 2] == '0' && a[i][m - 1] == '0') {
			continue;
		}
		else if (a[i][m - 2] == '1' && a[i][m - 1] == '1') {
			res.push_back({{i, m - 2}, {i, m - 1}, {i - 1, m - 2}});
			a[i][m - 2] = f(a[i][m - 2]);
			a[i][m - 1] = f(a[i][m - 1]);
			a[i - 1][m - 2] = f(a[i - 1][m - 2]);
		}
		else {
			if (a[i][m - 2] == '1') {
				res.push_back({{i, m - 2}, {i - 1, m - 2}, {i - 1, m - 1}});
				a[i][m - 2] = f(a[i][m - 2]);
				a[i - 1][m - 2] = f(a[i - 1][m - 2]);
				a[i - 1][m - 1] = f(a[i - 1][m - 1]);
			}
			else {
				res.push_back({{i, m - 1}, {i - 1, m - 2}, {i - 1, m - 1}});
				a[i][m - 1] = f(a[i][m - 1]);
				a[i - 1][m - 2] = f(a[i - 1][m - 2]);
				a[i - 1][m - 1] = f(a[i - 1][m - 1]);
			}
		}
	}
	// 2*m->2*2
	for (int j = m - 1; j >= 2; j--) {
		if (a[0][j] == '0' && a[1][j] == '0') {
			continue;
		}
		else if (a[0][j] == '1' && a[1][j] == '1') {
			res.push_back({{0, j}, {1, j}, {0, j - 1}});
			a[0][j] = f(a[0][j]);
			a[1][j] = f(a[1][j]);
			a[0][j - 1] = f(a[0][j - 1]);
		}
		else {
			if (a[0][j] == '1') {
				res.push_back({{0, j}, {1, j - 1}, {0, j - 1}});
				a[0][j] = f(a[0][j]);
				a[1][j - 1] = f(a[1][j - 1]);
				a[0][j - 1] = f(a[0][j - 1]);
			}
			else {
				res.push_back({{1, j}, {1, j - 1}, {0, j - 1}});
				a[1][j] = f(a[1][j]);
				a[1][j - 1] = f(a[1][j - 1]);
				a[0][j - 1] = f(a[0][j - 1]);
			}
		}
	}
	int i = 0, j = 0;
	vector<pair<int, int>> good;
	vector<pair<int, int>> bad;
	for (int k = i; k < i + 2; k++) {
		for (int l = j; l < j + 2; l++) {
			if (a[k][l] == target) {
				good.push_back({k, l});
			}
			else {
				bad.push_back({k, l});
			}
		}
	}
	
	if (good.size() == 0) { 
		
		for (int k = 0; k < 4; k++) {
			for (int l = k + 1; l < 4; l++) {
				for (int m = l + 1; m < 4; m++) {
					res.push_back({bad[k], bad[l], bad[m]});
				}
			}
		}
	}
	else if (good.size() == 1) {
		res.push_back({bad[0], bad[1], bad[2]});
	}
	else if (good.size() == 2) {
		res.push_back({good[0], good[1], bad[0]});
		res.push_back({good[0], good[1], bad[1]});
	}
	else if (good.size() == 3) {
		res.push_back({good[0], good[1], bad[0]});
		res.push_back({good[2], bad[0], good[0]});
		res.push_back({good[2], good[1], bad[0]});
	}
	a[i][j] = a[i + 1][j] = a[i][j + 1] = a[i + 1][j + 1] = target;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << a[i][j];
//		}
//		cout << '\n';
//	}
	cout << res.size() << '\n';
	for (auto t : res) {
		for (auto g : t) {
			cout << g.first + 1 << " " << g.second + 1 << " ";
		}	
		cout << '\n';
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		run_case();
	}
	
	
	return 0;
}



