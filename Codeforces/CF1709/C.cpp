#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int n = s.size();
	if (n % 2 != 0) {
		cout << "NO\n";
		return;
	}
	int cnt[3];
	cnt[0] = cnt[1] = cnt[2] = 0;
	for (auto c : s) {
		if (c == '(') {
			cnt[0]++;
		}
		else if (c == ')') {
			cnt[1]++;
		}
		else {
			cnt[2]++;
		}
	}
	int open = n / 2 - cnt[0];
	int close = n / 2 - cnt[1];
	if (open < 0 || close < 0) {
		cout << "NO\n";
		return;
	}
	if (open == 0 || close == 0) {
		cout << "YES\n";
		return;
	}
//	cout << open << " " << close << '\n'; 
	string t = s;
	for (auto& c : t) {
		if (c == '?') {
			if (open) {
				c = '(';
				open--;
			}
			else {
				c = ')';
				close--;
			}
		}
	}
//	cout << t << '\n';
	int val = 0;
//	int cntt = 0;
//	bool fi = true;
	int i = 0;
	while (i < n) {
		if (s[i] == '?' && t[i] == ')') {
			break;
		}
		i++;
	}
	int j = n - 1;
	while (j >= 0) {
		if (s[j] == '?' && t[j] == '(') {
			break;
		}
		j--;
	}
//	cout << i << " " << j << '\n';
	t[i] = '(';
	t[j] = ')';
//	cout << t << '\n';
	for (int k = 0; k < n; k++) {
		if (t[k] == '(') {
			val++;
		}
		else {
			val--;
		}
		if (val < 0) {
			cout << "YES\n";
			return;
		}
	}
//	for (int i = 0; i < n; i++) {
//		if (t[i] == '(') {
//			if (fi) {
//				fi = false;
//			}
//			else {
//				if (val >= 0) {
//					cout << "NO\n";
//					return;
//				}
//			}
//		}
//		if (val > 0 && s[i] == '?' && t[i] == '(') {
//			cout << "NO\n";
//			return;
//		}
//		if (t[i] == '(') {
//			val++;
//		}
//		else {
//			val--;
//		}
//	}
	cout << "NO\n";
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
