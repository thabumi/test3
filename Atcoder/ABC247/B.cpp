#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	map<string, int> m;
	vector<string> a(n);
	vector<string> b(n);
	for (int i = 0; i < n; i++) {
//		string a, b;
		cin >> a[i] >> b[i];
		if (a[i] != b[i]) {
			m[a[i]]++;
			m[b[i]]++;
		}
		else {
			m[a[i]]++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (m[a[i]] >= 2 && m[b[i]] >= 2) {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
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
