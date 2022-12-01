#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	string res = "";
	vector<pair<char, int>> v;
	for (int i = 0; i < s.size(); i++) {
		if (v.empty() || v.back().first != s[i]) {
			v.push_back({s[i], 1});
		}
		else {
			v.back().second++;
		}
	}
	
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i].first < v[i + 1].first) {
			for (int j = 0; j < v[i].second; j++) {
				res = res + v[i].first + v[i].first;
			}
		}
		else {
			for (int j = 0; j < v[i].second; j++) {
				res = res + v[i].first;
			}
		}
	}
	for (int j = 0; j < v[(int)v.size() - 1].second; j++) {
		res = res + v[(int)v.size() - 1].first;
	}
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
