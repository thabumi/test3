#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int sum = 0;
	for (auto t : s) {
		sum += (t - '0');
	}
	if (sum % 9 == 0) {
		cout << s[0];
		cout << 0;
		for (int i = 1; i < s.size(); i++) {
			cout << s[i];
		}
		cout << '\n';
		return;
	}
	else {
		int k = 9 - sum % 9;
		char c = '0' + k;
		bool ok = false;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] > c && !ok) {
				cout << c;
				ok = true;
			}
			cout << s[i];
		}
		if (!ok) {
			cout << c;
		}
		cout << '\n';
		return;
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
