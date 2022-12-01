#include <bits/stdc++.h>

using namespace std;

void run_case() {
	string s;
	cin >> s;
	if (s.size() == 2) {
		cout << s[1] << '\n';
	}
	else {
		char mn = s[0];
		for (int i = 0; i < s.size(); i++) {
			mn = min(mn, s[i]);
		}
		cout << mn << '\n';
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
