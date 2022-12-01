#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		stringstream ss;
		ss << s;
		string t;
		string res = "";
		while (ss >> t) {
			t[0] = toupper(t[0]);
			for (int i = 1; i < t.size(); i++) {
				t[i] = tolower(t[i]);
			}
			res = res + t + ' ';
		}
		res.pop_back();
		cout << res << '\n';
	}
	
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
