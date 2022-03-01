#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long a[3];
	cin >> a[0] >> a[1] >> a[2];
//	cout << a[0] << " " << a[1] << " " << a[2] << '\n';
	if ((a[0] + a[2]) % 2 == 0 && (a[0] + a[2]) / 2 % a[1] == 0 && (a[0] + a[2]) / 2 / a[1] > 0) {
		cout << "YES\n";
		return;
	}
	if ((a[1] * 2 - a[0]) % a[2] == 0 && (a[1] * 2 - a[0]) / a[2] > 0) {
		cout << "YES\n";
		return;
	}
	if ((a[1] * 2 - a[2]) % a[0] == 0 && (a[1] * 2 - a[2]) / a[0] > 0) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
