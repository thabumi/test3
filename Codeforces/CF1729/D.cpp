#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long x[n];
	long long y[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> y[i];
	}
	long long a[n];
	for (int i = 0; i < n; i++) {
		a[i] = y[i] - x[i];
	}
	sort(a, a + n);
	int i = 0;
	int j = n - 1;
	int res = 0;
	while (i < j) {
		if (a[j] < 0) {
			break;
		}
		if (a[i] + a[j] >= 0) {
			res++;
			i++;
			j--;
			continue;
		}
		else {
			i++;
			continue;
		}
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
