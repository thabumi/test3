#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	map<char, int> m;
	m['D'] = 1;
	m['U'] = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		string s;
		cin >> s;
		for (auto t : s) {
			a[i] += m[t];
			a[i] = (a[i] % 10 + 10) % 10;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
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
