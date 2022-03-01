#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	if (s.size() <= 2) {
		cout << 0 << '\n';
		return;
	}
	int cnt0 = 0;
	int cnt1 = 0;
	for (auto t : s) {
		if (t == '0') {
			cnt0++;
		}
		else {
			cnt1++;
		}
	}
	if (cnt0 == cnt1) {
		cout << cnt0 - 1 << '\n';
	}
	else {
		cout << min(cnt0, cnt1) << '\n';
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
