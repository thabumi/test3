#include <bits/stdc++.h>
 
using namespace std;


void run_case() {
	string t;
	cin >> t;
	int m = t.size();
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	vector<vector<pair<int, int>>> p(n);
	for (int i = 0; i < n; i++) {
		int k = s[i].size();
		string r = t.substr(0, k);
		if (r == s[i]) {
			p[i].push_back({0, k - 1});
		}
		for (int j = k; j < m; j++) {
			string l = r.substr(1, k - 1);
			l += t[j];
			r = l;
			if (r == s[i]) {
				p[i].push_back({j - k + 1, j});
			}
		}
	}
//	for (int i = 0; i < n; i++) {
//		cout << i << '\n';
//		for (auto t : p[i]) {
//			cout << t.first << " " << t.second << '\n';
//		}
//	}
//	return;
	int i = 0;
	vector<pair<int, int>> res;
	while (i < m) {
		int mx = i - 1;
		int fstmx = -1;
		int idx = -1;
		for (int j = 0; j < n; j++) {
			for (auto t : p[j]) {
				if (t.first <= i) {
					if (mx < t.second) {
						mx = t.second;
						fstmx = t.first;
						idx = j;
					}
				}
			}
			
		}
		if (mx == i - 1) {
			cout << -1 << '\n';
			return;
		}
		res.push_back({idx + 1, fstmx + 1});
		i = mx + 1;
	}
	cout << res.size() << '\n';
	for (auto t : res) {
		cout << t.first << " " << t.second << '\n';
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
