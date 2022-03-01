#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	map<int, int> m;
	long long res = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] -= i;
		m[a[i]]++;
		res += m[a[i]] - 1;
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
