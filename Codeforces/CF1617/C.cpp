#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	vector<int> v;
	vector<int> s;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] >= 1 && a[i] <= n && m[a[i]] == 0) {
			m[a[i]] = 1;
		}
		else {
			v.push_back(a[i]);
		}
	}
	for (int i = 1; i <= n; i++) {
		if (m[i] == 0) {
			s.push_back(i);
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (v[i] < 2 * s[i] + 1) {
			cout << -1 << '\n';
			return;
		}
	}
	cout << (int)v.size() << '\n';
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
