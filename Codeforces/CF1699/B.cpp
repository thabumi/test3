#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		if (i % 4 == 0 || i % 4 == 3) {
			for (int j = 0; j < m; j++) {
				if (j % 4 == 0 || j % 4 == 3) {
					cout << 1 << " ";
				}
				else {
					cout << 0 << " ";
				}
			}
		}
		else {
			for (int j = 0; j < m; j++) {
				if (j % 4 == 0 || j % 4 == 3) {
					cout << 0 << " ";
				}
				else {
					cout << 1 << " ";
				}
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
