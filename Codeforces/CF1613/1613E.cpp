#include <bits/stdc++.h>
 
using namespace std;
int n, m;
 
bool Check(int a, int b) {
	return (0 <= a && a < n && 0 <= b && b < m);
}
int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };
 
void run_case(){
	cin >> n >> m;
	char a[n][m];
	int r;
	int c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'L') {
				r = i;
				c = j;
			}
		}
	}
	vector<vector<bool>> visited(n);
	for (int i = 0; i < n; i++) {
		visited[i].assign(m, 0);
	}
	queue<pair<int, int>> q;
	q.push({r, c});
	visited[r][c] = 1;
	while(!q.empty()) {
		pair<int, int> cell = q.front();
		int x = cell.first;
		int y = cell.second;
		a[x][y] = '+';
		q.pop();
		for (int i = 0; i < 4; i++) {
			int adjx = x + dRow[i];
            int adjy = y + dCol[i];
			if (Check(adjx, adjy) && a[adjx][adjy] == '.') {
				int count = 0;
				for (int j = 0; j < 4; j++) {
					int adjX = adjx + dRow[j];
					int adjY = adjy + dCol[j];
					if (Check(adjX, adjY)) {
						if (a[adjX][adjY] == '.') {
							count++;
						}
					}
				}
				if (count <= 1) {
					q.push({adjx, adjy});
				}
			}
		}
	}
	a[r][c] = 'L';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j];
		}
		cout << '\n';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
