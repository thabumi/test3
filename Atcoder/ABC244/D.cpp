#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	char s[3];
	char t[3];
	for (int i = 0; i < 3; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> t[i];
	}
	map<char, char> right;
	right[s[0]] = s[1];
	right[s[1]] = s[2];
	right[s[2]] = s[0];
	for (int i = 0; i < 3; i++) {
		if (t[(i + 1) % 3] != right[t[i]]) {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
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
