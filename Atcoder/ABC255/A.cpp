#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int r,c;
	cin >> r >> c;
	r--;
	c--;
	int a[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	cout << a[r][c];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
