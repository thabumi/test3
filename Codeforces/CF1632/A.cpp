#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	if (s.size() > 2) {
		cout << "NO\n";
	}
	else {
		if (s.size() == 2) {
			if (s[0] != s[1]) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "YES\n";
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
