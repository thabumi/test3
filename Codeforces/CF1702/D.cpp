#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int p;
	cin >> p;
	int n = s.size();
	vector<pair<char, int>> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = {s[i], i};
	}
	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++) {
//		cout << v[i].first;
//	}
//	cout << '\n';
//	return;
	int l = 0;
	int r = n;
	while (l < r) {
		int mid = (l + r) / 2;
		int val = 0;
		for (int i = 0; i < n - mid; i++) {
			val += v[i].first - 'a' + 1;
		}
		if (val <= p) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
//	cout << r << '\n';
//	return;
	vector<pair<int, char>> res(n - r);
	for (int i = 0; i < n - r; i++) {
		res[i] = {v[i].second, v[i].first};
	}
	sort(res.begin(), res.end());
	for (int i = 0; i < n - r; i++) {
		cout << (char)res[i].second;
	}
	cout << '\n';
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
