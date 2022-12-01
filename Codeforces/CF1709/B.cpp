#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long right[n + 1];
	long long left[n + 1];
	long long sumright[n + 1];
	long long sumleft[n + 1];
	sumright[0] = 0;
	for (int i = 1; i <= n - 1; i++) {
		right[i] = max(a[i] - a[i + 1], 0LL);
		sumright[i] = sumright[i - 1] + right[i];
	}
	sumleft[1] = 0;
	for (int i = 2; i <= n; i++) {
		left[i] = max(a[i] - a[i - 1], 0LL);
		sumleft[i] = sumleft[i - 1] + left[i];
	}
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		if (s < t) {
			cout << sumright[t - 1] - sumright[s - 1] << '\n';
		}
		else {
			cout << sumleft[s] - sumleft[t] << '\n';
		}
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
