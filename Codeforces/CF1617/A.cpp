#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s, t;
	cin >> s >> t;
	sort(s.begin(), s.end());
	if (s.size() < 3) {
		cout << s << '\n';
		return;
	}
	if (s.find('a') == -1 || s.find('b') == -1 || s.find('c') == -1) {
		cout << s << '\n';
		return;
	}
	if (t[0] != 'a') {
		cout << s << '\n';
		return;
	}
	if (t[1] == 'b') {
		int count = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'a' || s[i] == 'c') {
				cout << s[i];
			}
			else if (s[i] == 'b') {
				count++;
			}
		}
		for (int i = 0; i < count; i++) {
			cout << 'b';
		}
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c') {
				cout << s[i];
			}
		}
		cout << '\n';
	}
	else {
		cout << s << '\n';
		return;
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