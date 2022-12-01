#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	set<char> se;
	string s;
	cin >> s;
	int cnt = 0;
	int res = 0;
	for (int i = 0; i < s.size(); i++) {
		if (!se.count(s[i])) {
			if (se.size() == 3) {
				se.clear();
			}
			se.insert(s[i]);
			if (se.size() == 1) {
				res++;
			}
			
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
