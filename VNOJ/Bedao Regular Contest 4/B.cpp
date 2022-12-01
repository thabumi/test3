#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s, t;
	cin >> s >> t;
	vector<int> cnt(26, 0);
	for (auto c : s) {
		cnt[c - 'A']++;
	}
	for (auto c : t) {
		cnt[c - 'A']--;
	}
	for (auto n : cnt) {
		if (n != 0) {
			cout << -1;
			return;
		}
	}
	if (s.size() == 0) {
		cout << 0;
		return;
	}
	char c = s[0];
	int n = s.size();
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n; i++) {
		if (s[i] == c) {
			v1.push_back(i);
		}
		if (t[i] == c) {
			v2.push_back(i);
		}
	}
	long long res = 0;
	for (int i = 0; i < v1.size(); i++) {
		res += abs(v1[i] - v2[i]);
	}
	cout << res;
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
