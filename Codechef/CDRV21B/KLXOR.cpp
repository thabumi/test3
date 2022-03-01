#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int count = 0;
	bool b = false;
	for (int i = 0; i <= n - k; i++) {
		if (s[i] == '1') {
			b = 1 - b;
		}
	}
	if (b) {
		count++;
	}
	for (int i = n - k + 1; i < n; i++) {
		if (s[i] != s[i - n + k - 1]) {
			b = 1 - b;
		}
		if (b) {
			count++;
		}
	}
	cout << count << '\n';
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
