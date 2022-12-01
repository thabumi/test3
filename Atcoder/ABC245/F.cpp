#include <bits/stdc++.h>
 
using namespace std;

vector<int> adj[(int)2e5 + 5];
int visited[(int)2e5 + 5];
bool cycle[(int)2e5 + 5];
int cnt;
void dfs(int t) {
	visited[t] = cnt;
	for (auto g : adj[t]) {
		if (visited[g] == cnt) {
			cycle[g] = 1;
		}
		else if (!visited[g]) {
			dfs(g);
		}
		cycle[t] |= cycle[g];
	}
}


void run_case() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	cnt = 1;
//	for (int i = 1; i <= n; i++) {
//		cout << cycle[i] << " " << visited[i] << '\n';
//	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			dfs(i);
			cnt++;
		}
	}
	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		cout << visited[i] << " ";
//	}
//	cout << '\n';
	for (int i = 1; i <= n; i++) {
		if (cycle[i]) {
			res++;
		}
//		res += cycle[i];
//		if (cycle[i]) {
//			cout << i << " ";
//		}
	}
	cout << res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("random_00.txt", "r", stdin);
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
