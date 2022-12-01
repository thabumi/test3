#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s, t;
	cin >> n >> s >> t;
	if (s[0] != t[0] || s[n - 1] != t[n - 1]) {
		cout << -1 << '\n';
		return;
	}
	vector<int> a;
	vector<int> b;
	int cnt = 1;
	
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			cnt++;
		}
		else {
			a.push_back(cnt);
			cnt = 1;
		}
	}
	a.push_back(cnt);
	cnt = 1;
	for (int i = 1; i < n; i++) {
		if (t[i] == t[i - 1]) {
			cnt++;
		}
		else {
			b.push_back(cnt);
			cnt = 1;
		}
	}
	b.push_back(cnt);
//	for (auto t : a) {
//		cout << t << ' ';
//	}
//	cout << '\n';
//	for (auto t : b) {
//		cout << t << ' ';
//	}
//	cout << '\n';
//	return;
	if (a.size() != b.size()) {
		cout << -1 << '\n';
		return;
	}
	int k = a.size();
	long long res = 0;
	for (int i = 0; i < k - 1; i++) {
		if (a[i] == b[i]) {
			continue;
		} 
		else if (a[i] > b[i]) {
			int m = a[i] - b[i];
			a[i] -= m;
			a[i + 1] += m;
			res += m;
		}
		else {
			int m = b[i] - a[i];
			b[i] -= m;
			b[i + 1] += m;
			res += m;
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
