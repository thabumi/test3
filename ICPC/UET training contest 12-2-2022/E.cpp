#include <bits/stdc++.h>
 
using namespace std;

// cac node duoc danh so tu 0...n - 1
map<int, long long> res; // gia tri lon nhat neu lay root = i
map<int, bool> visited;
vector<long long> value; //gia tri tai node i
vector<int> adj[200005]; // node con cua i
void dfs(int root) {
	visited[root] = true;
//	if (adj[root].size() < 2) {
//		res[root] = value[root];
//		for (auto t : adj[root]) {
//			dfs(t);
//		}
//		return;
//	}
	vector<long long> v;
	for (auto t : adj[root]) {
		if (!visited[t]) {
			dfs(t);
		}
		v.push_back(res[t]);
	}
	sort(v.begin(), v.end());
	long long child = 0;
	for (auto t : v) {
		child += t; // lay tong toan bo res cua cac node con cua t
	}
	if (cnt % 2 == 1) {
		child -= first; // neu so node con la le thi tru cai be nhat
	}
	res[root] = value[root] + child; 
}

void run_case() {
	int n;
	cin >> n;
	value.resize(n);
	for (int i = 0; i < n; i++) {
		int p;
		long long a;
		cin >> p >> a;
		value[i] = a;
		if (p != -1) {
			p--;
			adj[p].push_back(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			dfs(i);
		}
	}	
	long long k = res[0];
	for (int i = 0; i < n; i++) {
//		cout << res[i] << " ";
		if (k < res[i]) {
			k = res[i];
		}
	}
	cout << k;
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
