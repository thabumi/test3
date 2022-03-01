#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	string a, s;
	cin >> a >> s;
	string b = "";
	while (s.size() > 0) {
		if (a.size() == 0) {
			b = s + b;
			break;
		}
		if (a[a.size() - 1] > s[s.size() - 1]) {
			if (s.size() > 1 && s[s.size() - 2] == '1') {
				b = (char)(10 + s[s.size() - 1] - a[a.size() - 1] + '0') + b;
				a.pop_back();
				s.pop_back();
				s.pop_back();
			}
			else {
				cout << -1 << '\n';
				return;
			}
		}
		else if (a[a.size() - 1] <= s[s.size() - 1]) {
			b = (char)(s[s.size() - 1] - a[a.size() - 1] + '0') + b;
			a.pop_back();
			s.pop_back();
		}
	}
	if (a.size() > 0) {
		cout << -1 << '\n';
		return;
	}
	cout << stoll(b) << '\n';
//	cout << b << '\n';
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
