#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	if (s.size() % 2 == 0) {
		cout << "Alice ";
		int res = 0;
		for (int i = 0; i < s.size(); i++) {
			res += s[i] - 'a' + 1;
		}
		cout << res << '\n';
	}
	else {
		int mx1;
		int mx2;
		int res1 = 0;		
		for (int i = 0; i < s.size() - 1; i++) {
			res1 += s[i] - 'a' + 1;
		}
		int res2 = res1 - s[0] + s[s.size() - 1];
		res1 = res1 - (s[s.size() - 1] - 'a' + 1);
		res2 = res2 - (s[0] - 'a' + 1);
		if (max(res1, res2) > 0) {
			cout << "Alice " << abs(max(res1, res2)) << '\n';
		}
		else {
			cout << "Bob " << abs(max(res1, res2)) << '\n';
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
