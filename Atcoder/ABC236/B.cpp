#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < 4 * n - 1; i++) {
		int x; 
		cin >> x;
		m[x]++;
	}
	for (int i = 1; i <= n; i++) {
		if (m[i] == 3) {
			cout << i;
			return;
		}
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
