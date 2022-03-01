#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int i = n - 2;
	int res = 0;
	int last = a[n - 1];
	while (i >= 0) {
		if (a[i] != last) {
//			a[i] = last;
			i = 2 * i - n + 1;
//			a[i] = last;
			res++;
		}
		else {
			i--;
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
