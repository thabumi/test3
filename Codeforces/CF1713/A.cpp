#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int x[n], y[n];
	int mxx = -1e9, mnx = 1e9, mxy = -1e9, mny = 1e9;
	
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		if (x[i] == 0) {
			mxy = max(y[i], mxy);
			mny = min(y[i], mny);
		}
		if (y[i] == 0) {
			mxx = max(x[i], mxx);
			mnx = min(x[i], mnx);
		}
	}
	
	int res = 0;
	if (mnx == (int)1e9) {
		
	}
	else if (mnx * mxx < 0) {
		res += 2 * (abs(mnx) + abs(mxx));
	}
	else {
		res += 2 * max(abs(mnx), abs(mxx));
	}
	if (mny == (int)1e9) {
		
	}
	else if (mny * mxy < 0) {
		res += 2 * (abs(mny) + abs(mxy));
	}
	else {
		res += 2 * max(abs(mny), abs(mxy));
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
