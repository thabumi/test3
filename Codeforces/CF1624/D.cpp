#include <bits/stdc++.h>
 
using namespace std;

#define int long long

bool check(int couple, int l, int n, int k) {
	int cpperstr = l / 2;
	if (cpperstr * k <= couple && l * k <= n) {
		return true;
	}
	return false;
}

void run_case() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> cnt(26, 0);
	for (auto t : s) {
		cnt[t - 'a']++;
	}
	int couple = 0;
	for (int i = 0; i < 26; i++) {
		couple += cnt[i] / 2;
	}
//	cout << couple << "\n";
	int l = 1;
	int r = 1e6;
//	return;
	while (l < r) {
		int mid = (l + r + 1) / 2;
		if (check(couple, mid, n, k)) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l << '\n';
}
signed main() {
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
