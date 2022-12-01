#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
//	for (int i = 0; i < (1 << 6); i++) {
//		for (int j = 0; j < 6; j++) {
//			if (i & (1 << j)) {
//				cout << 1;
//			}
//			else {
//				cout << 0;
//			}
//		}
//		cout << '\n';
//	}
//	return;
	if (n > 22) {
//		cout << "IMPOSSIBLE\n"; wrong
		return;
	}
	if (n <= 4) {
		cout << "POSSIBLE\n";
		return;
	}
	int cnt = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cnt += (s[i] == '?');
		if (s[i] == '?') {
			v.push_back(i);
		}
	}
	for (int i = 0; i < (1 << cnt); i++) {
		for (int j = 0; j < cnt; j++) {
			if (i & (1 << j)) {
				s[v[j]] = '1';
			}
			else {
				s[v[j]] = '0';
			}
		}
		bool check = true;
		for (int k = 0; k < n - 4; k++) {
			if(s[k] == s[k + 4] && s[k + 1] == s[k + 3]) {
				check = false;
				break;
			}
		}
		for (int k = 0; k < n - 5; k++) {
			if (s[k] == s[k + 5] && s[k + 1] == s[k + 4] && s[k + 2] == s[k + 3]) {
				check = false;
				break;
			}
		}
		if (check) {
//			cout << s << " ";
			cout << "POSSIBLE\n";
			return;
		}
	}
	cout << "IMPOSSIBLE\n";
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
