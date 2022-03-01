#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int c, b;
	cin >> c >> b;
	map<int, int> m;
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		x--;
		m[x] = 1;
	}
	vector<int> res(n, -1);
	for (int i = 0; i < n; i++) {
		if (m[i]) {
			res[i] = 0;
		}
	}
//	for (int i = 0; i < n; i++) {
//		cout << res[i];
//	}
//	cout << '\n';
	if (c % 2 == 0) {
		res[0] = 0;
	}
	else {
		res[0] = 1;
	}
	for (int i = 1; i < n; i++) {
		if (c == 0) {
			res[i] = res[i - 1];
			continue;
		}
		if (res[i] == -1) {
			res[i] = 1 - res[i - 1];
			c--;
		}
		else if (res[i] == 0) {
			if (res[i - 1] == 1) {
				c--;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << res[i];
	}
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
