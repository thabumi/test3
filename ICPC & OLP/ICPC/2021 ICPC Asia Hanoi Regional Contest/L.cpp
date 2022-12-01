#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	string res = "";
	while (n > 1) {
		if (n % 2 == 1) {
			res = 'R' + res;
		}
		else {
			res = 'L' + res;
		}
		n /= 2;
	}
	cout << res << '\n';
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
