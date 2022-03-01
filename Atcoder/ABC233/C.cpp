#include <bits/stdc++.h>
 
using namespace std;
int n;
long long x;
vector<vector<long long>> v;
vector<int> res;
void bt(int k) {
	if (k == n) {
		if (x == 1) {
			res[0]++;
		}
	}
	else {
		long long X = x;
		for (int i = 0; i < v[k].size(); i++) {
			if (x % v[k][i] != 0) {
				continue;
			}
			x /= v[k][i];
			bt(k + 1);
			x = X;
		}
	}
}
void run_case() {
	res.push_back(0);
	cin >> n >> x;
	v.resize(n);
	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		for (int j = 0; j < l; j++) {
			long long x;
			cin >> x;
			v[i].emplace_back(x);
		}
	}
	bt(0);
	cout << res[0];
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
