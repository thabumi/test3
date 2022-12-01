#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s, t;
	cin >> s >> t;
	int i = 0;
	int j = 0;
	int n = s.size();
	int m = t.size();
	while (i < n && j < m) {
		if (s[i] == t[j]) {
			i++;
			j++;
		}
		else {
			j++;
		}
	}
	if (i < n) {
		cout << "IMPOSSIBLE\n";
	}
	else {
		cout << m - n << '\n';
	}
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
