#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s[n - 2];
	string res = "";
	for (int i = 0; i < n - 2; i++) {
		cin >> s[i];
	}
	res += s[0][0];
	bool OK = true;
	for (int i = 1; i < n - 2; i++) {
		if (s[i][0] == s[i - 1][1]) {
			res += s[i][0];
		}
		else {
			res = res + s[i - 1][1] + s[i][0];
			OK = false;
		}
	}
	res += s[n - 3][1];
	if (OK) {
		res += 'a';
	}
	
	
	cout << res << '\n';
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


