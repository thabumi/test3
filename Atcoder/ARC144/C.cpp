#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	if (k * 2 > n) {
		cout << -1;
		return;
	}
	if ((n % (2 * k)) * 2 > 2 * k) {
		vector<int> res(n + 1);
		vector<vector<int>> v(k, vector<int>());
		for (int i = 1; i <= n; i++) {
			v[i % k].push_back(i);
		}
		for (int i = 0; i < k; i++) {
			if ((int)v[i].size() % 2 == 0) {
				for (int j = 0; j < v[i].size(); j += 2) {
					res[v[i][j]] = v[i][j + 1];
					res[v[i][j + 1]] = v[i][j];
				}
			}
			else {
				int t = v[i].size();
				for (int j = 0; j + 2 < t; j += 2) {
					res[v[i][j]] = v[i][j + 1];
					res[v[i][j + 1]] = v[i][j];
				}
				res[v[i][t - 3]] = v[i][t - 2];
				res[v[i][t - 2]] = v[i][t - 1];
				res[v[i][t - 1]] = v[i][t - 3];
				
			}
		}
		for (int i = 1; i <= n; i++) {
			cout << res[i] << ' ';
		}
		return;
	}
	else {
		vector<vector<int>> v;
		for (int i = 1; i <= n / (2 * k) * (2 * k); i += 2 * k) {
			vector<int> t;
			for (int j = 0; j < 2 * k; j++) {
				t.push_back(i + j);
			}
			v.push_back(t);
		}
		for (int i = n / (2 * k) * (2 * k) + 1; i <= n; i++) {
			v.back().push_back(i);
		}
	//	for (auto t : v) {
	//		for (auto r : t) {
	//			cout << r << " ";
	//		}
	//		cout << '\n';
	//	}
		for (int i = 0; i < v.size() - 1; i++) {
			for (int j = k; j < 2 * k; j++) {
				cout << v[i][j] << " ";
			}
			for (int j = 0; j < k; j++) {
				cout << v[i][j] << " ";
			}
		}
	//	vector<i
		for (int j = k; j < v.back().size(); j++) {
			cout << v.back()[j] << " ";
		}
		for (int j = 0; j < k; j++) {
			cout << v.back()[j] << " ";
		}
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
