#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n % 7 == 0) {
		cout << n << '\n';
		return;
	}
	int k = n % 7;
	if (n % 10 + 7 - k < 10) {
		cout << n + 7 - k << '\n';
	}
	else {
		cout << n - k << '\n';
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
