#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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
