#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	vector<int> cnt(26, 0);
	for (auto t : s) {
		cnt[t - 'a']++;
	}
	string res = "";
	for (int i = 0; i < s.size(); i++) {
		if (cnt[s[i] - 'a'] > 1){
			cnt[s[i] - 'a']--;
		}
		else {
			for (int j = i; j < s.size(); j++) {
				res += s[j];
			}
			break;
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
