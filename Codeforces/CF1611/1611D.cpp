#include <bits/stdc++.h>
 
using namespace std;
vector<int> pos;
bool Check(int a, int b) {
	return pos[a] < pos[b];
}
void run_case(){
	int n;
	cin >> n;
	int a[n + 1];
	vector<vector<int>> adj(n + 1, vector<int>());
	int root;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == i) {
			root = i;
		}
		else {
			adj[a[i]].emplace_back(i);
		}
	}
	pos.resize(n + 1);
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		pos[x] = i;
	}
	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end(), Check);
	}
	if (pos[root] != 1) {
		cout << -1 << '\n';
		return;
	}
	stack<int> q;
	vector<int> w(n + 1);
	w[root] = 0;
	q.push(root);
	int itl = 1;
	vector<int> distance(n + 1);
	distance[root] = 0;
	while (!q.empty()) {
		int s = q.top();
		q.pop();
		if (s == root) {
			w[root] = 0;
		}
		else {
			w[s] = pos[s] - distance[s];
		}
		for (auto u : adj[s]) {
			if (pos[u] < pos[s]) {
				cout << -1 << '\n';
				return;
			}
			distance[u] = pos[s];
			q.push(u);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << w[i] << " ";
	}
	cout << '\n';
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
