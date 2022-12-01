#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long res = 1;
	int cnt = 0;
	while (res <= 1e9) {
		res *= 3;
		cnt++;
	}
	if (n <= cnt) {
		cout << "YES\n";
		long long cur = 1;
		for (int i = 0; i < n; i++) {
			cout << cur << " ";
			cur *= 3;
		}
		cout << '\n';
	}
	else {
		cout << "NO\n";
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
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
