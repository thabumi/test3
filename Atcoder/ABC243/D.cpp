#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	long long x;
	string s;
	cin >> n >> x >> s;
	string t = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == 'U') {
			if (t.size() >= 1 && t[t.size() - 1] != 'U') {
				t.pop_back();
			}
			else {
				t.push_back('U');
			}
		}
		else {
			t.push_back(s[i]);
		}
	}
	for (int i = 0; i < t.size(); i++) {
		if (t[i] == 'U') {
			x /= 2;
		}
		else if (t[i] == 'R') {
			x = x * 2 + 1;
		}
		else {
			x *= 2;
		}
	}
	cout << x;
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
