#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
		
	cin >> s;
	int cnt = 1;
	int n = s.size();
	for (int i = 0; i < s.size(); i++) {
		if ((i - 1 < 0 || s[i - 1] != s[i]) && (i + 1 >= n || s[i + 1] != s[i])) {
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
