#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int x;
	cin >> x;
	int a[4];
	a[0] = 0;
	cin >> a[1] >> a[2] >> a[3];
//	return;
	vector<bool> open(4, 0);
	while (!open[x]) {
		open[x] = 1;
		x = a[x];
	}
	for (int i = 1; i <= 3; i++) {
		if (!open[i]) {
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
