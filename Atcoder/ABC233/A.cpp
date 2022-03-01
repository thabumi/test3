#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int x, y;
	cin >> x >> y;
	if (x >= y) {
		cout << 0;
		return;
	}
	cout << (y - x + 9) / 10;
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
