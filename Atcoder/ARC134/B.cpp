#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
//	string t = s;
//	sort(t.begin(), t.end());
	vector<int> cnt(26, 0);
	for (auto c : s) {
		cnt[c - 'a']++;
	}
	int l = 0;
	int r = n - 1;
	while (l < r) {
		char c;
		
		for (char i = 'a'; i <= 'z'; i++) {
			if (cnt[i - 'a'] > 0) {
				c = i;
				break;
			}
		}
//		cout << c << '\n';
		if (s[l] != c) {
			while (r > l && s[r] != c) {
				cnt[s[r] - 'a']--;
				r--;
			}
			swap(s[r], s[l]);
			cnt[s[r] - 'a']--;
			cnt[s[l] - 'a']--;
			l++;
			r--;
		}
		else {
			cnt[s[l] - 'a']--;
			l++;
		}
//		int r0 = r;
////		if (s[l] != t[l]) {
//			while (r >= 0 && s[r] != t[l]) {
//				r--;
//			}
//			if (r == -1) {
//				break;
//				r = r0;
//				l++;
//				continue;
//			}
////			cout << l << " " << r << '\n';
//			swap(s[l], s[r]);
////			cout << s << '\n';
////		}
//		l++;
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
