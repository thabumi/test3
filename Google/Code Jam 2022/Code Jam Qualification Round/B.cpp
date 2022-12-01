#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int c[3], m[3], y[3], k[3];
	for (int i = 0; i < 3; i++) {
		cin >> c[i] >> m[i] >> y[i] >> k[i];
	}
	int minc = 1e9, minm = 1e9, miny = 1e9, mink = 1e9;
	for (int i = 0; i < 3; i++) {
		minc = min(minc, c[i]);
		minm = min(minm, m[i]);
		miny = min(miny, y[i]);
		mink = min(mink, k[i]);
	}
	if (minc + minm + miny + mink < 1e6) {
		cout << "IMPOSSIBLE\n";
	}
	else {
		int rem = minc + minm + miny + mink - (int)(1e6);
		if (rem != 0) {
			int t = min(minc, rem);
			minc -= t;
			rem -= t;
		}
		if (rem != 0) {
			int t = min(minm, rem);
			minm -= t;
			rem -= t;
		}
		if (rem != 0) {
			int t = min(miny, rem);
			miny -= t;
			rem -= t;
		}
		if (rem != 0) {
			int t = min(mink, rem);
			mink -= t;
			rem -= t;
		}
		cout << minc << " " << minm << " " << miny << " " << mink << '\n';
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
