#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		for (int i = n - 2; i >= 1; i--) {
			cout << i << " ";
		}
		cout << n - 1 << " " << n << '\n';
	}
	else {
		cout << n - 3 << " " << n - 2 << " ";
		for (int i = n - 4; i >= 1; i--) {
			cout << i << " ";
		}
		cout << n - 1 << " " << n << '\n';
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
