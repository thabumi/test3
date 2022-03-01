#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s[0] == '0' || s[1] == '0' || s[n] == '0') {
		cout << "No\n";
		return;
	}
	vector<int> v(n); 
	for (int i = 0; i < n; i++) {
		v[i] = i;	
	}
	for (int i = 2; i < n; i++) {
		if (s[i] == '0') {
			swap(v[i], v[i - 1]);
		}
	}
	cout << "Yes\n";
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
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
