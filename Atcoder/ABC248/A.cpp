#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	vector<bool> b(10, 0);
	for (auto t : s) {
		b[t - '0'] =1;
	}
	for (int i = 0; i < 10; i++) {
		if (b[i] == 0) {
			cout << (char)(i + '0');
			return;
		}
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
