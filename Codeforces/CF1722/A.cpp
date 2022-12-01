#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> m;
	if (n != 5) {
		cout << "NO\n";
		return;
	}	
	else {
		for (auto t : s) {
			m[t]++;
		}
	}
	
	
	string x = "Timur";
	for (auto t : x) {
		if (m[t] != 1) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
