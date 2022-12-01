#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	char c;
	cin >> n >> c;
	string s;
	cin >> s;
	s = s + s;
	if (c == 'g') {
		cout << "0\n";
		return;
	}
	vector<int> v(2 * n, 1e9);
	for (int i = 2 * n - 1; i >= 0; i--) {
		if (s[i] == 'g') {
			v[i] = 0;
		}
		else {
			if (i < 2 * n - 1) {
				v[i] = v[i + 1] + 1;
			}
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == c) {
			res = max(res, v[i]);
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
