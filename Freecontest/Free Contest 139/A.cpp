#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n;
	cin >> n;
	long long l = 1;
	long long r = 1e4;
	while (l < r) {
		long long mid = (l + r + 1) / 2;
		long long sum = 0;
		long long cur = 0;
		for (int i = 1; i <= mid; i++) {
			cur += i;
			sum += cur;
		}
		if (sum <= n) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l;
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
