#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int par[n + 5];
	map<int, int> notleaf;
	for (int i = 1; i <= n; i++) {
		cin >> par[i];
		notleaf[par[i]] = 1;
	}
	if (n == 1) {
		cout << 1 << '\n' << 1 << '\n' << 1 << '\n';
		return;
	}
	vector<int> leaf;
	for (int i = 1; i <= n; i++) {
		if (!notleaf[i]) {
			leaf.push_back(i);
		}
	}
	vector<bool> visited(n + 5, 0);
	vector<vector<int>> res;
	for (int i = 0; i < leaf.size(); i++) {
		int t = leaf[i];
		vector<int> tmp;
		while (!visited[t]) {
			visited[t] = true;
			tmp.push_back(t);
			t = par[t];
		}
		res.push_back(tmp);
	}
	cout << res.size() << '\n';
	for (auto t : res) {
		cout << t.size() << '\n';
		for (int i = t.size() - 1; i >= 0; i--) {
			cout << t[i] << " ";
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
