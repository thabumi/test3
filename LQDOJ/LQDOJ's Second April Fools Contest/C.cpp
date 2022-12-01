#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	while (cin >> s) {
		for (int i = 0; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		if (s.find("iu") != string::npos || s.find("thun") != string::npos || s.find("thuong") != string::npos || s.find("yeu") != string::npos) {
			cout << "YES\n";
			return;
		}
	}
//	cout << "YES\n";
	cout << "NO\n";
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
