#include <bits/stdc++.h>
 
using namespace std;

int dif(string a, string b) {
	return ((a[0] != b[0]) + (a[1] != b[1])) * (a > b);
}

void run_case() {
//	cout << 'k' - 'a';return;
	map<string, int> cnt;
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		cnt[s[i]]++;
	}
	long long res = 0;
	for (int i = 0; i < n; i++) {
		for (char k = 'a'; k <= 'k'; k++) {
			string t = "";
			t = t + s[i][0] + k;
			if (dif(s[i], t) == 1) {
				res += cnt[t];
			}
		}
		for (char k = 'a'; k <= 'k'; k++) {
			string t = "";
			t = t + k + s[i][1];
//			t = k + t;
			if (dif(s[i], t) == 1) {
				res += cnt[t];
			}
		}
//		cout << res << '\n';
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
