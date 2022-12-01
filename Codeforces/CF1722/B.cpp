#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s[2];
	cin >> s[0] >> s[1];
	for (int i = 0; i < n; i++) {
		if (s[0][i] == 'R' && s[1][i] != 'R') {
			cout << "NO\n";
			return;
		}
		else if (s[1][i] == 'R' && s[0][i] != 'R') {
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
