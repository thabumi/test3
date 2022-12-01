#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> adj[n + 1];
	vector<bool> visited(n + 1, 0);
	vector<int> deg(n + 1, 0);
	vector<int> color(n + 1, -1);
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		deg[x]++;
		deg[y]++;
	}
	
	queue<int> q;
	q.push(1);
	color[1] = 1;
	while (!q.empty()) {
		int P = q.front(); q.pop();
//		cout << P << endl;
		for (auto g : adj[P]) {
			if (visited[g]) {
				continue;
			}
			visited[g] = 1;
			color[g] = 1 - color[P];
			q.push(g);
		}
//		if (adj[P].size() == 0) {
//			continue;
//		}
//		int p = *adj[P].begin();
////		cout << p << endl;
//		if (visited[p]) {
//			continue;
//		}
//		if (deg[p] == 1 && deg[P] == 1) {
//			continue;
//		}
//		visited[p] = 1;
//		for (auto t : adj[p]) {
//			adj[t].erase(adj[t].find(p));
//			
//			if (adj[t].size() == 1) {
//				q.push(t);
//			}
//		}
//		adj[p].clear();
	}
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 1; i <= n; i++) {
		if (color[i] == 1) {
			cnt1++;
		}
		else {
			cnt2++;
		}
	}
	vector<int> res(n + 1);
	long long sum = 0;
	long long Res = n;
	
	if (cnt1 >= cnt2) {
		
		for (int i = 1; i <= n; i++) {
			if (color[i] == 1) {
				res[i] = deg[i];
			}
			else {
				res[i] = 1;
				Res--;
			}
			sum += res[i];
 		}
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (color[i] == 0) {
				res[i] = deg[i];
			}
			else {
				res[i] = 1;
				Res--;
			}
			sum += res[i];
 		}
	}
	
	cout << Res << " " << sum << '\n';
	for (int i = 1; i <= n; i++) {
		cout << res[i] << " ";
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
