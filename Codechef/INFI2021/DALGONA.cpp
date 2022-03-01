#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << '\n';
		cout << 1 << " " << 1 << '\n';
		return;
	}
	if (n == 2) {
		cout << 2 << '\n';
		cout << "3 1\n";
		cout << "4 1\n";
		return;
	}
	if (n == 4) {
		cout << 1 << '\n';
		cout << 2 << " " << 4 << '\n';
	}
	else {
		cout << 2 << '\n';
		cout << n - 2 << " " << 1 << '\n';
		cout << 2 << " " << n - 1 << '\n';
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
