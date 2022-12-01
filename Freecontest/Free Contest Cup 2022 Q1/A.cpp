#include <bits/stdc++.h>
 
using namespace std;

long long f(long long a) {
	string s = to_string(a);
	long long res = 0;
	for (auto t : s) {
		res += (t - '0');
	}
	return res;
}

void run_case() {
	long long n;
	cin >> n;
	if (n >= 9) {
		cout << 9 << '\n';
	}
	else if (n == 0) {
		cout << 1 << '\n';
	}
	else {
		long long res = 1;
		for (int i = 1; i <= n; i++) {
			res *= i;
		}
		while (res != f(res)) {
			res = f(res);
		}
		cout << res << '\n';
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
