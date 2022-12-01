#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int x[n], y[n];
	string s;
	map<int, pair<int, int>> m;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	cin >> s;
	for (int i = 0; i < n; i++) {
		m[y[i]].first = -1e9 - 5;//L
		m[y[i]].second = 1e9 + 5;//R
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
//			cout << m[y[i]].second << '\n';
			if (x[i] > m[y[i]].second) {
				cout << "Yes";
				return;
			}
			m[y[i]].first = max(x[i] + 1, m[y[i]].first);
		}
		else {
//			cout << m[y[i]].first << '\n';
			if (x[i] < m[y[i]].first) {
				cout << "Yes";
				return;
			}
			m[y[i]].second = min(x[i] - 1, m[y[i]].second);
		}
	}
	cout << "No";
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
