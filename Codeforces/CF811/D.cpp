#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	char c[n][m];
	pair<int, int> start = {0, 0};
	pair<int, int> finish;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
			if (c[i][j] == 'F') {
				finish = {i, j};
			}
		}
	}
	pair<int, int> pre[n][m];
	bool visited[n][m];
	memset(visited, false, sizeof(visited));
	queue<pair<int, int>> q;
	q.push(finish);
	while (!q.empty()) {
		
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
