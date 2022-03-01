#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int x[3];
	cin >> x[0] >> x[1] >> x[2];
	sort(x, x + 3);
	if (x[2] == x[0] + x[1]) {
		cout << "YES\n";
	}
	else {
		if (x[0] == x[1] && x[2] % 2 == 0) {
			cout << "YES\n";
		}
		else if (x[1] == x[2] && x[0] % 2 == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
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
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
