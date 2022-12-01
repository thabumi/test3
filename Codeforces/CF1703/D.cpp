#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s[n];
	map<string, int> m;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		m[s[i]] = 1;
	}
	string res = "";
	for (int i = 0; i < n; i++) {
		int t = s[i].size();
		bool b = false;
		for (int j = 1; j < t; j++) {
			string x = "";
			string y = "";
			for (int k = 0; k < j; k++) {
				x += s[i][k];
			}
			for (int k = j; k < t; k++) {
				y += s[i][k];
			}
			if (m[x] && m[y]) {
				b = true;
				break;
			}
		}
		if (b) {
			res += '1';
		}
		else {
			res += '0';
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
