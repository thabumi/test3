#include <bits/stdc++.h>
 
using namespace std;
int n;

void run_case() {
	cin >> n;	
	int p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	if (n == 2) {
		if (p[0] == 1) {
			cout << 0;
		}
		else {
			cout << 1;
		}
		return;
	}
	if ((p[0] < p[1] && (p[0] != 1 || p[1] != n))  || (p[0] == n && p[1] == 1)) {
		cout << min((n + 1 - p[0]) % n, p[0] + 1);
		return;
	}
	else {
		cout << min((p[0] % n + 1), n + 1 - p[0]);
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
