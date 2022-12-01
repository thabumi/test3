#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int res = 0;
	res += 25 * (s[0] - 'a');
	if (s[1] > s[0]) {
		res += s[1] - 'a';
	}
	else {
		res += s[1] - 'a' + 1;
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
