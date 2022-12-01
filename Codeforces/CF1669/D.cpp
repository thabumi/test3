#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n == 1) {
		if (s == "W") {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		return;
	}
	int cntR = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'W') {
			if ((cntR == cnt || cntR == 0) && cnt > 0) {
				cout << "NO\n";
				return;
			}
			cntR = 0;
			cnt = 0;
		}
		else {
			cnt++;
			if (s[i] == 'R') {
				cntR++;
			}
		}
	}
	if ((cntR == cnt || cntR == 0) && cnt > 0) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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
