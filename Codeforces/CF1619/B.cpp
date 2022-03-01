#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	string s;
	cin >> s;
	int n = s.size();
	string t = s.substr(0, n / 2);
	if (t + t == s) {
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
