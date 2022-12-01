#include <bits/stdc++.h>
 
using namespace std;

int f(string a, string b) {
	int res = 0;
	for (int i = 0; i < a.size(); i++) {
		res += abs(a[i] - b[i]);
	}
	return res;
}

void run_case() {
	int n, m;
	cin >> n >> m;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int mn = 1e9;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			mn = min(mn, f(s[i], s[j]));
		}
	}
	cout << mn << '\n';
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
