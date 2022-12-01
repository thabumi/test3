#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		for (int i = 0; i < a; i++) {
			cout << "01";
		}
		for (int i = 0; i < b - a; i++) {
			cout << "1";
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < b; i++) {
		cout << "01";
	}
	for (int i = 0; i < a - b; i++) {
		cout << "0";
	}
	cout << '\n';
	return;
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
