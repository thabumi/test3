#include <bits/stdc++.h>
 
using namespace std;

long long find(long long a, long long k, long long x, long long y) {
	long long l = 0;
	long long r = k;
	while (l < r) {
		long long mid = (l + r + 1) / 2;
		if (mid * x + (k - mid) * y <= a) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	return l;
}

void run_case() {
	long long a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a < b) {
		swap(a, b);
	}
	if (x < y) {
		swap(x, y);
	}
	long long l = 0;
	long long r = 1e9;
	while (l < r) {
		long long mid = (l + r + 1) / 2;
		long long mx = find(a, mid, x, y);
		
		if (b >= mx * y + (mid - mx) * x) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l << '\n';
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
