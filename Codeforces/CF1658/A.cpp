#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	int cnt = -1;
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			if (cnt != -1) {
				res += 2 - min(i - cnt - 1, 2);
			}
			cnt = i;
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
