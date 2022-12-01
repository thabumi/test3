#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<long long> a(n);
	vector<long long> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long mn = 1e18;
	mn = min(mn, abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]));
	mn = min(mn, abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]));
	long long mna0 = 1e18, mnb0 = 1e18, mnan = 1e18, mnbn = 1e18;
	for (int i = 1; i < n - 1; i++) {
		mna0 = min(mna0, abs(b[i] - a[0]));
		mnan = min(mnan, abs(b[i] - a[n - 1]));
		mnb0 = min(mnb0, abs(a[i] - b[0]));
		mnbn = min(mnbn, abs(a[i] - b[n - 1]));
	}
	mn = min(mn, abs(a[0] - b[n - 1]) + mnb0 + mnan);
	mn = min(mn, abs(b[0] - a[n - 1]) + mnbn + mna0);
	mn = min(mn, abs(a[0] - b[0]) + mnbn + mnan);
	mn = min(mn, abs(a[n - 1] - b[n - 1]) + mnb0 + mna0);
	mn = min(mn, mna0 + mnbn + mnb0 + mnan);
	mn = min(mn, abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[n - 1]) + mnb0);
	mn = min(mn, abs(a[0] - b[n - 1]) + abs(a[0] - b[0]) + mnan);
	mn = min(mn, abs(b[0] - a[n - 1]) + abs(b[n - 1] - a[n - 1]) + mna0);
	mn = min(mn, abs(b[0] - a[n - 1]) + abs(a[0] - b[0]) + mnbn);
	cout << mn << '\n';
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
