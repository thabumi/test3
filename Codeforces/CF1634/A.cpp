#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (k == 0) {
		cout << 1 << '\n';
		return;
	}
	string t = s;
	reverse(t.begin(), t.end());
	if (t == s) {
		cout << 1 << '\n';
	}
	else {
		cout << 2 << '\n';
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
