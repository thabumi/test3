#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	map<int, int> m;
	int cnt = 0;
	int cnt2 = 0;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]] = 1;
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (m[b[i]]) {
			cnt2++;
		}
		if (a[i] == b[i]) {
			cnt++;
		}
	}
//	cout << cnt << '\n' << cnt2;
	cout << cnt << '\n' << cnt2 - cnt;
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
