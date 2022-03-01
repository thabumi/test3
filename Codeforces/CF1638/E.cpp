#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	cout << 1000 << " " << 1000 << '\n';
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= 1000; j++) {
			if (j <= 500) {
				cout << 1 << " ";
			}
			else {
				cout << 2 << " ";
			}
		}
		cout << '\n';
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
