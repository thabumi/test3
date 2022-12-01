#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	if (a[n - 1] == 0) {
		cout << 0 << '\n';
		return;
	}
	long long sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += a[i];
	}
	if (sum + 1 >= a[n - 1]) {
		cout << 1 << '\n';
	}
	else {
		cout << a[n - 1] - sum << '\n';
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
