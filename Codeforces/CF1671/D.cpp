#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	int x;
	cin >> n >> x;
	long long res = 0;
	int a[n];
	int mn = 1e9;
	int mx = -1e9;
	for (int i = 0; i < n; i++) {
		
		cin >> a[i];
		mx = max(mx, a[i]);
		mn = min(mn, a[i]);
	}
	long long mn = 
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
