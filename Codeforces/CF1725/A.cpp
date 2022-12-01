#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, m;
	cin >> n >> m;
	if (m == 1) {
		cout << n - 1;
	}
	else {
		cout << n * (m - 1);
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
