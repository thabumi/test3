#include <bits/stdc++.h>
 
using namespace std;

vector<pair<int, int>> a;
vector<int> adj[(int)2e5 + 5];
//vector<int> visited;
vector<pair<int, int>> res;
map<pair<int, int>, int> m;
map<pair<pair<int, int>, pair<int, int>>, int> mp;
int row[] = {-1, 0, 1 ,0};
int col[] = {0, -1, 0, 1};

const int MAX = 1e6;
const int MIN = -1e6;

void dfs(int n) {
//	visited[n]++;
	long long mn = 1e18;
	int x = a[n].first, y = a[n].second;
	vector<int> t;
	for (int i = 0; i < 4; i++) {
		int x0 = x + row[i];
		int y0 = y + col[i];
		if (x0 > MAX || x0 < MIN || y0 > MAX || y0 < MIN) {
			continue;
		}
		int k = m[{x0, y0}];
		if (!k) {
			res[n] = {x0, y0};
			mn = 1;
		}
		else {
			t.push_back(k);
		}
	}
	for (auto k : t) {
		if (!mp[{a[n], a[k]}]) {
			mp[{a[n], a[k]}] = 1;
			dfs(k);
		}
		if (abs(x - res[k].first) + abs(y - res[k].second) < mn) {
			mn = abs(x - res[k].first) + abs(y - res[k].second);
			res[n].first = res[k].first;
			res[n].second = res[k].second;
		}
	}
}

void run_case() {
	
	int n;
	cin >> n;
	a.resize(n + 5);
//	visited.assign(n + 5, 0);
	res.assign(n + 5, {(int)1e9, (int)1e9});
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
		m[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
//		if (visited[i]) {
			dfs(i);
//		}
	}
	for (int i = 1; i <= n; i++) {
		cout << res[i].first << " " << res[i].second << '\n';
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