#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			for (int j = 0; j < n; j++) {
				if (a[j] != a[i]) {
					cout << a[j] << " ";
				}
			}
			return;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != a[n - 1]) {
			cout << a[i] << " ";
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
