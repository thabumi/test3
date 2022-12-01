#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s, t;
	cin >> s >> t;
	if (t == "a") {
		cout << 1 << '\n';
		return;
	}
	if (t.find('a') != string::npos) {
		cout << -1 << '\n';
		return;
	}
	long long res = 1;
	for (int i = 0; i < s.size(); i++) {
		res *= 2;
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
