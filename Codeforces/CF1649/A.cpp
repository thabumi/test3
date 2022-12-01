#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	int n;
	cin >> n;
	int a[n];
	int cnt0 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			cnt0++;
		}
	}
	if (cnt0 >= 2) {
		int i = 0;
		while (a[i] == 1) {
			i++;
		}
		int j = n - 1;
		while (a[j] == 1) {
			j--;
		}
		i--;
		j++;
		cout << max(j - i, 0) << '\n';
	} 
	else if (cnt0 == 0) {
		cout << 0 << '\n';
	}
	else {
		cout << 2 << '\n';
	}
	return;
	int res = 0;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			cnt++;
		}
		else {
			if (cnt >= 2) {
				res += cnt;
			}
			cnt = 1;
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