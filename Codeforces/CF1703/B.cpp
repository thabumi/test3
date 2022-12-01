#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	map<char, int> m;
	string s;
	cin >> n >> s;
	int res = 0;
	for (auto t : s) {
		res += 2 - m[t];
		m[t] = 1;
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
