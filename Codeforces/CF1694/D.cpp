#include <bits/stdc++.h>
 
using namespace std;

vector<long long> l;
vector<long long> r;
vector<long long> mx;
vector<vector<int>> adj;
int res;
void dfs(int v, int p) {
	int cnt = 0;
	long long sum = 0;
	for (auto t : adj[v]) {
		if (t == p) {
			continue;
		}
		cnt++;
		dfs(t, v);
		sum += mx[t];
	}
	
	if (cnt == 0) {
//		cout << v << '\n';
		mx[v] = r[v];
		res++;
		return;
	}
	if (l[v] > sum) {
		res++;
		mx[v] = r[v];	
	}
	else {
		mx[v] = min(r[v], sum);
	}
}

void run_case() {
	int n;
	cin >> n;
	res = 0;
	adj.assign(n + 1, vector<int>());
	l.assign(n + 1, 0);
	r.assign(n + 1, 0);
	mx.assign(n + 1, 0);
	for (int i = 2; i <= n; i++) {
		int x;
		cin >> x;
		adj[x].push_back(i);
		adj[i].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		cin >> l[i] >> r[i];
	}
	dfs(1, -1);
	cout << res << '\n';
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
