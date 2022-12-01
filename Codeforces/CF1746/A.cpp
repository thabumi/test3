#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int a[n];
	bool ok = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
		if (a[i] == 1) {
			ok = true;
		}
	}
	if (ok) {
		cout << "YES\n";
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
