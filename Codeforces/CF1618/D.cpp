#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	if (k == 0) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		cout << sum << '\n';
		return;
	}
	int Max = 1;
	int count = 1;
	for (int i = 1; i < 2 * k; i++) {
		if (a[i - 1] == a[i]) {
			count++;
		}
		else {
			Max = max(count, Max);
			count = 1;
		}
	}
	Max = max(count, Max);
	int Dec = 0;
	if (Max > k) {
		Dec = Max - k;
	}
	int sum = 0;
	for (int i = 2 * k; i < n; i++) {
		sum += a[i];
	}
	sum += Dec;
	cout << sum << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


