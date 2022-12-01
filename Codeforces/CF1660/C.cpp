#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int j = 0;
	string t = s;
//	int n = s.size();
//	while (i < n) {
//		if (i < n - 1) {
//			if (s[i] == s[i + 1]) {
//				i += 2;
//			}
//			else {
//				t += s[i];
//				i++;
//			}
//		}
//		else {
//			t += s[i];
//			i++;
//		}
//	}
//	cout << t << '\n';
	int m = t.size();
	vector<int> v(m);
	map<char, int> mp;
	for (int i = 0; i < m; i++) {
		if (!mp[t[i]]) {
			v[i] = -1;
		}
		else {
			v[i] = mp[t[i]];
		}
		mp[t[i]] = i + 1;
	}
//	for (auto t : v) {
//		cout << t << " ";
//	}
//	cout << '\n';
//	return;
	j = 0;
	int res = m;
//	cout << res << '\n';
	int mn = 1;
	while (j < m) {
		if (v[j] >= mn) {
			res -= 2;
			mn = j + 2;
			j++;
		}
		else {
			j++;
		}
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
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
