#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long x, a, d, n;
	cin >> x >> a >> d >> n;
	long long st = a;
	long long last = a + d * (n - 1);
	if (st > last) {
		swap(st, last);
		d = -d;
	}
	if (x >= last) {
		cout << x - last;
	}
	else if (x <= st) {
		cout << st - x;
	}
	else {
		cout << min(((x - a) % d + d) % d, d - ((x - a) % d + d) % d);
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
