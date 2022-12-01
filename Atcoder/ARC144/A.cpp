#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	cout << 2 * n << '\n';
	string s = "";
	while (n) {
		if (n >= 4) {
			n -= 4;
			s = '4' + s;
		}
		else {
			s = (char)('0' + n) + s;
			n = 0;
		}
	}
	cout << s;
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
