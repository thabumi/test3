#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	string s;
	cin >> s;
	int cnt = 1;
	int mx = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			cnt++;
		}
		else {
			mx = max(mx, cnt);
			cnt = 1;
		}
	}
	mx = max(mx, cnt);
	cout << mx;
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