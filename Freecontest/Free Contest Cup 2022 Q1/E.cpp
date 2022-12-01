#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int row[] = {-1, 0, 1, 0};
	int col[] = {0, -1, 0, 1};
//	int k;
//	cin >> k;
	int n = 39;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int grid[3][13];
	memset(grid, -1, sizeof(grid));
	vector<pair<int, int>> p(40, {-1, -1});
	grid[2][7] = a[0];
	p[a[0]] = {2, 7};
	for (int i = 1; i < n; i++) {
		if (p[a[i]].first == -1) {
			int x = p[a[i - 1]].first;
			int y = p[a[i - 1]].second;
			bool visited[3][13];
			memset(visited, 0, sizeof(visited));
			assert(x >= 0);
			assert(y >= 0);
			assert(x < 3);
			assert(y < 13);
			visited[x][y] = true;
			queue<pair<int, int>> q;
			q.push({x, y});
			while (!q.empty()) {
				pair<int, int> t = q.front();
				q.pop();
				int x0 = t.first;
				int y0 = t.second;
				bool ok = false;
				for (int j = 0; j < 4; j++) {
					int x1 = x0 + row[j];
					int y1 = y0 + col[j];
					if (x1 < 0 || x1 >= 3 || y1 < 0 || y1 >= 13) {
						continue;
					}
					else {
						if (!visited[x1][y1]) {
							if (grid[x1][y1] == -1) {
								assert(x1 >= 0);
								assert(x1 < 3);
								assert(y1 >= 0);
								assert(y1 < 13);
								grid[x1][y1] = a[i];
								p[a[i]] = {x1, y1};
								ok = true;
								break;
							}
							else {
								visited[x1][y1] = true;
								q.push({x1, y1});
							}
						}
					}
				}
				if (ok) {
					break;
				}
			}
		}
	}
	for (int i = 1; i <= 39; i++) {
		if (p[i].first == -1) {
			bool ok = false;
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 13; k++) {
					if (grid[j][k] == -1) {
						grid[j][k] = i;
						p[i] = {j, k};
						ok = true;
						break;
					}
				}
				if (ok) {
					break;
				}
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			cout << grid[i][j] << " ";
		}
		cout << '\n';
	}
//	vector<pair<int, int>> res(40);
//	int cnt = 0;
//	bool marked[40];
//	bool visited[3][13];
//	int Res[3][13];
//	memset(visited, 0, sizeof(visited));
//	memset(marked, 0, sizeof(marked));
//	for (int i = 0; i < n; i++) {
//		if (marked[a[i]]) {
//			continue;
//		}
//		if (i == 0) {
//			marked[a[i]] = true;
//			cnt++;
//			res[a[i]] = {1, 7};
//			visited[1][7] = true;
//			Res[1][7] = a[i];
//		}
//		else {
//			int x = res[a[i - 1]].first;
//			int y = res[a[i - 1]].second;
//			queue<pair<int, int>> q;
//			bool Visited[3][13];
//			memset(Visited, 0, sizeof(Visited));
//			q.push({x, y});
//			Visited[x][y] = 1;
//
//
//			while (!q.empty()) {
//				pair<int, int> t = q.front();
//				q.pop();
//				int x0 = t.first;
//				int y0 = t.second;
//				bool ok = false;
//				for (int j = 0; j < 4; j++) {
//					int x1 = x0 + row[j];
//					int y1 = y0 + col[j];
//					if (x1 < 0 || x1 >= 13 || y1 < 0 || y1 >= 13) {
//						continue;
//					}
//					else {
//						if (!visited[x1][y1]) {
//							marked[a[i]] = true;
//							cnt++;
//							res[a[i]] = {x1, y1};
//							visited[x1][y1] = true;
//							Res[x1][y1] = a[i];
//							ok = true;
//							break;
//						}
//						else if (!Visited[x1][y1]) {
//							q.push({x1, y1});
//							Visited[x1][y1] = true;
//						}
//					}
//				}
//				if (ok) {
//					break;
//				}
//			}
//
//		}
//		if (cnt == 39) {
//			break;
//		}
//	}
////	return;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 13; j++) {
//			cout << Res[i][j] << " ";
//		}
//		cout << '\n';
//	}
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
