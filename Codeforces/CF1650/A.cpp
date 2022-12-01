#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	char c;
	cin >> c;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c && i % 2 == 0) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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
