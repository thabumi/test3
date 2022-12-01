#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int mx0 = 0;
	int mx1 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			a[i] = -1;
		}
	}
	vector<int> sum(n + 1);
	sum[0] = 0;
	for (int i = 0; i < n; i++) {
		sum[i + 1] = sum[i] + a[i];
	}
	int Mn = 1e9;
	int Mx = -1e9;
	int mn = sum[0];
	int mx = sum[0];
	for (int i = 0; i <= n; i++) {
		Mn = min(Mn, sum[i] - mx);
		mn = min(mn, sum[i]);
		Mx = max(Mx, sum[i] - mn);
		mx = max(mx, sum[i]);
	}
//	cout << Mn << " " << Mx;
	cout << abs(Mn - Mx) + 1;
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
