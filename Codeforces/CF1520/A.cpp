#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	map<char, int> m;
	for (int i = 0; i < n; i++) {
		if (m[s[i]] && i > 0 && s[i - 1] != s[i]) {
			cout << "NO\n";
			return;
		}
		else {
			m[s[i]] = 1;
		}
	}
	cout << "YES\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
