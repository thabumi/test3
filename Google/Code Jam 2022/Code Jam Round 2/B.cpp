#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long r;
	cin >> r;
	long long fail = 1;
	long long pass = 0;
	for (long long i = 1; i <= r; i++) {
		fail += 4;
		double d = sqrt(1.0 * i * i / 2);
		long long x = d;
		long long y = round(sqrt(i * i - x * x));
		if (x >= 1) {
			fail += 8 * x;
			if (x > y) {
				fail -= 4;
			}
		}
		
//		if (round(d) == (long long)d) {
//			
//		}
//		for (long long x = 1; 2 * x * x <= r * r; x++) {
			
//		}
//		cout << fail << '\n';
	}
//	cout << '\n';
	for (long long i = -r; i <= r; i++) {
		long double d = sqrt((r + 0.5) * (r + 0.5) - i * i);
		pass += 2 * (long long)d + 1;
	}
//	cout << pass << " " << fail << '\n';
	cout << pass - fail << '\n';
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
