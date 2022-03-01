#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	int rb, cb, rd, cd;
	cin >> rb >> cb >> rd >> cd;
	int dr = 1;
	int dc = 1;
	int time = 0;
	while (rb != rd && cb != cd) {
		time++;
		if (rb == n && dr == 1) {
			dr = -1;
		}
		if (rb == 1 && dr == -1) {
			dr = 1;
		}
		if (cb == m && dc == 1) {
			dc = -1;
		}
		if (cb == 1 && dc == -1) {
			dc = 1;
		}
		rb += dr;
		cb += dc;
//		cout << rb << " " << rd << '\n';
	}
	cout << time << '\n';
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
