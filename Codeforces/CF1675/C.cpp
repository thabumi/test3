#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int n = s.size();
	int left = 0;
	int right = n - 1;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			left = i;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') {
			right = i;
		}
	}
	cout << max(right - left + 1, 1) << '\n';
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
