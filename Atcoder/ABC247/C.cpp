#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s[17];
	s[1] = "1";
	int n;
	cin >> n;
	vector<vector<int>> v(17);
	v[1] = {1};
	for (int i = 2; i <= n; i++) {
		int k = v[i - 1].size();
		v[i].resize(2 * k + 1);
		v[i][k] = i;
		for (int j = 0; j < k; j++) {
			v[i][j] = v[i][j + k + 1] = v[i - 1][j];
		}
	}
//	for (int i = 2; i <= n; i++) {
//		string t = to_string(i);
//		s[i] = s[i - 1] + 
//	}
	for (int i = 0; i < v[n].size(); i++) {
		cout << v[n][i] << " ";
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
