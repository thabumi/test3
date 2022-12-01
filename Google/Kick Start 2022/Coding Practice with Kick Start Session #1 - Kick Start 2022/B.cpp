#include <bits/stdc++.h>
 
using namespace std;

bool vow(char c) {
	string s = "ueoaiUEOAI";
	return (s.find(c) != string::npos);
}

void run_case() {
	int n;
	string s;
	cin >> s;
	if (s[s.size() - 1] == 'y' || s[s.size() - 1] == 'Y') {
		cout << s << " is ruled by nobody.\n";
	}
	else if (vow(s[s.size() - 1])) {
		cout << s << " is ruled by Alice.\n";
	}
	else {
		cout << s << " is ruled by Bob.\n";
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
