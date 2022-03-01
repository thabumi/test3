#include <bits/stdc++.h>
 
using namespace std;

bool Check(string& s, string& t) {
	if (s.size() > t.size()) {
		return true;
	}
	if (s.size() < t.size()) {
		return false;
	}
	return s > t;
}

void run_case() {
	string s;
	cin >> s;
	string max = "0";
	for (int i = s.size() - 1; i >= 1; i--) {
		int x = s[i] + s[i - 1] - 2 * '0';
		if (x >= 10) {
			string t = to_string(x);
			s[i - 1] = t[0];
			s[i] = t[1];
			cout << s << '\n';
			return;
		}
	}
	int x = s[0] + s[1] - 2 * '0';
	s.erase(0, 1);
	string t = to_string(x);
	s[0] = t[0];
	cout << s << '\n';
	return;
	for (int i = 0; i < s.size() - 1; i++) {
		int x = s[i] + s[i - 1] - 2 * '0';
		if (x >= 10) {
			string t = to_string(x);
			s[i - 1] = t[0];
			s[i] = t[1];
			cout << s << '\n';
			return;
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
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
