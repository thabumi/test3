#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> count(32, 0);
	for (int i = 0; i < 32; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] & (1 << i)) {
				count[i]++;
			}
		}
	}
	string s = "";
	for (int i = 0; i < 32; i++) {
		if (count[i] >= 2) {
			s = '1' + s;
		}
		else {
			s = '0' + s;
		}
	}
//	cout << s << '\n';
	int res = stoi(s, 0, 2);
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
