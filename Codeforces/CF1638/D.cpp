#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int dRow[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dCol[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int a[1001][1001];

bool check(int i, int j) {
	
	if (a[i][j + 1] == -1 && a[i][j] == -1 && a[i + 1][j] == -1 && a[i + 1][j + 1] == -1) {
		return false;
	}
	int k = max(a[i][j], max(a[i + 1][j], max(a[i][j + 1], a[i + 1][j + 1])));
	if ((a[i][j + 1] == k || a[i][j + 1] == -1) && (a[i + 1][j] == k || a[i + 1][j] == -1) && (a[i + 1][j + 1] == k || a[i + 1][j + 1] == -1) && (a[i][j] == k || a[i][j] == -1)) {
		return true;
	}
	return false;
}

void run_case() {
	int n, m;
	cin >> n >> m;
//	int a[n + 1][m + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	queue<pair<int, int>> q;
	vector<vector<int>> res(m * n, vector<int>(3));
	int cnt = 0;
	vector<vector<bool>> visited(n + 1, vector<bool>(m + 1, false));
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (check(i, j)) {
				
				int k = max(a[i][j], max(a[i + 1][j], max(a[i][j + 1], a[i + 1][j + 1])));
				if (k != -1) {
					q.push({i, j});
					res[cnt][0] = i;
					res[cnt][1] = j;
					res[cnt][2] = k;
					cnt++;
					a[i][j] = a[i + 1][j] = a[i][j + 1] = a[i + 1][j + 1] = -1;
					visited[i][j] = 1;
				}
				
			}
		}
	}
	
	while (!q.empty()) {
		pair<int, int> p = q.front();
		
		q.pop();
		int x = p.first;
		int y = p.second;
		
//		res.push_back({x, y, k});
		
		for (int i = 0; i < 8; i++) {
			int x1 = x + dRow[i];
			int y1 = y + dCol[i];
			if (x1 < 1 || x1 >= n || y1 < 1 || y1 >= m) {
				continue;
			}
			if (visited[x1][y1]) {
				continue;
			}
			if (check(x1, y1)) {
				
				
				int k = max(a[x1][y1], max(a[x1 + 1][y1], max(a[x1][y1 + 1], a[x1 + 1][y1 + 1])));
				if (k != -1) {
					q.push({x1, y1});
					vector<int> v = {x1, y1, k};
					res[cnt][0] = x1;
					res[cnt][1] = y1;
					res[cnt][2] = k;
					cnt++;
					a[x1][y1] = a[x1 + 1][y1] = a[x1][y1 + 1] = a[x1 + 1][y1 + 1] = -1;
					visited[x1][y1] = 1;
				}
				
			}		
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] != -1) {
				cout << -1 << '\n';
				return;
			}
		}
	}
	cout << cnt << '\n';
	for (int i = cnt - 1; i >= 0; i--) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << " ";
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
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
