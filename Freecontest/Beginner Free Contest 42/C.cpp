#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int type;
	cin >> type;
	string s;
	cin >> s;
	int h = (s[0] - '0') * 10 + s[1] - '0';
	int m = (s[3] - '0') * 10 + s[4] - '0';
//	cout << h << " " << m << " ";
	if (type == 12) {
		if (h > 12) {
			if (s[1] == '0') {
				s[0] = '1';
			}
			else {
				s[0] = '0';
			}
		}
		if (m > 59) {
			s[3] = '0';
		}
	}
	else {
		if (h > 23) {
			s[0] = '0';
		}
		if (m > 59) {
			s[3] = '0';
		}
	}
	cout << s;
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
