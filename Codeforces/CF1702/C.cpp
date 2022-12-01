#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	map<int, int> mn;
	map<int, int> mx;
	int n, k;
	cin >> n >> k;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (!mn[a[i]]) {
			mn[a[i]] = i;
		}
	}
	for (int i = n; i >= 1; i--) {
		if (!mx[a[i]]) {
			mx[a[i]] = i;
		}
	}
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		if (mn[x] < mx[y] && mn[x] && mx[y]) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
