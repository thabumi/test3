#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int x, y, n;
	cin >> x >> y >> n;
	if (y < x * 3) {
		cout << y * (n / 3) + x * (n % 3);
	}
	else {
		cout << x * n;
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
