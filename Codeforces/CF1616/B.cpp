#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
//	string r = s;
//	sort(r.begin(), r.end());
//	if (r[0] == r[n - 1]) {
//		cout << r[0] << r[0] << '\n';
//		return;
//	}
	if (n >= 2 && s[0] == s[1]) {
		cout << s[0] << s[0] << '\n';
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (s[i] < s[i + 1]) {
			string res = s.substr(0, i + 1);
			string t = res;
			reverse(t.begin(), t.end());
			res += t;
			cout << res << '\n';
			return;
		}
	}
	
	string res = s.substr(0, n);
	string t = res;
	reverse(t.begin(), t.end());
	res += t;
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
