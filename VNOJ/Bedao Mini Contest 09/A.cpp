#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long x, y;
	cin >> x >> y;
	if (x == y) {
		cout << 0 << " " << 0;
		return;
	}
	long long step = 0;
	long long res = 0;
	long long Pow = -1;
	if (x < y) {
		long long t = x;
		while (t < y) {
			step++;
				
			long long r = x + Pow;
			Pow *= -2;
			res += abs(r - t);
			t = r;
			if (t >= y) {
				res -= (r - y);
			}
		}
		cout << step << " " << res;
	}
	else {
		long long t = x;
		while (t > y) {
			step++;
				
			long long r = x + Pow;
			Pow *= -2;
			res += abs(r - t);
			t = r;
			if (t <= y) {
				res -= (y - r);
			}
		}
		cout << step << " " << res;
	}
//	cout << step << " " << res;
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
