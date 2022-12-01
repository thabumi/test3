#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string t;
	cin >> t;
	string res = "";
	int i = n - 1;
	while (i >= 0) {
		if (t[i] == '0') {
			string s = "";
			s = s + t[i - 2] + t[i - 1];
			char c = (stoi(s) - 1) + 'a';
			res = c + res;
			i -= 3;
		}
		else {
			string s = "";
			s = s + t[i];
			char c = (stoi(s) - 1) + 'a';
			res = c + res;
			i--;
		}
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
