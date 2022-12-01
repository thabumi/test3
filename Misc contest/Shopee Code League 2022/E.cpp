#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, t;
	cin >> n >> t;
	map<string, long long> m;
	for (int i = 0; i < n; i++) {
		string s;
		long long x;
		cin >> s >> x;
		m[s] = x;
	}
	for (int i = 0; i < t; i++) {
		string x, y;
		long long z;
		cin >> x >> y >> z;
		if (m[x] < z) {
			continue;
		}
		else {
			m[x] -= z;
			m[y] += z;
		}
	}
	for (auto t : m) {
		cout << t.first << " " << t.second << '\n';
	}
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
