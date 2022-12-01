#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	string t = "";
	t += s[0];
	map<char, int> m;
	m[s[0]] = 1;
	for (int i = 1; i < s.size(); i++) {
		if (m[s[i]]) {
			break;
		}
		t += s[i];
		m[s[i]] = 1;
	}
//	cout << t;
	int k = t.size();
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != t[i % k]) {
			cout << "NO\n";
			return;
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
