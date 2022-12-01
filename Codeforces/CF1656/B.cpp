#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long k;
	cin >> k;
	long long a[n];
//	long long sum = 0;
	map<long long, int> m;
	bool ok = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
		if (m[a[i] - k] || m[a[i] + k]) {
			ok = true;
//			return;
		}
		m[a[i]] = 1;
	}
	if (ok) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
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
