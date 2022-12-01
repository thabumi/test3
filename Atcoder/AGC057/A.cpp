#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int l, r;
	cin >> l >> r;
	string s = to_string(l);
	string t = to_string(r);
	if (s.size() == t.size()) {
		cout << r - l + 1 << '\n';
	}
	else {
		if (t[0] == '1') {
			string x1 = "";
			string x2 = "";
			for (int i = 0; i < t.size() - 1; i++) {
				x1 += t[i];
				x2 += t[i + 1];
			}
			int x = max(stoi(x1), stoi(x2)) + 1;
			string k = "1";
			string m = "";
			for (int i = 1; i < t.size(); i++) {
				k += '0';
				m += '9';
			}
//			cout << stoi(m) << " " << stoi(k) << " " << max(x, l) << " ";
			cout << stoi(m) - max(x, l) + 1 + r - stoi(k) + 1 << '\n';
		}
		else {
			string k = "1";
			for (int i = 1; i < t.size(); i++) {
				k += '0';
			}
			cout << r - stoi(k) + 1 << '\n';
		}
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
