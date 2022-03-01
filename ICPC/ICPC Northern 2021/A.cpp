#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	string S[4] = {".py", ".Py", ".pY", ".PY"};
	for (int i = 0; i < 4; i++) {
		if (s.find(S[i]) != string::npos) {
			cout << "yes";
			return;
		}
	}
	cout << "no";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
