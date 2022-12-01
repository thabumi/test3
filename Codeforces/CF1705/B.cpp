#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i < n - 1) {
			sum += a[i];
		}
	}
	a[n - 1] = 1000;
	int i = 0;
	while (a[i] == 0) {
		i++;
	}
	int cnt = 0;
	while (i < n) {
		if (a[i] == 0) {
			cnt++;
		}
		i++;
	}
	cout << sum + cnt << '\n';
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
