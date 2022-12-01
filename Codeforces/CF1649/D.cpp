#include <bits/stdc++.h>
 
using namespace std;


void run_case() {
	int n, c;
	cin >> n >> c;
	vector<int> a(c + 1, 0);
	vector<int> sum(c + 1);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x] = 1;
	}
	sum[0] = 0;
	for (int i = 1; i <= c; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	for (int i = 1; i <= c; i++) {
		if (a[i]) {
			for (int j = 1; j * i <= c; j++) {
				if (!a[j]) {
					if (sum[min(c, i * j + i - 1)] - sum[i * j - 1] != 0) {
						cout << "No\n";
						return;
					}
				}
			}
		}
	}
	
	cout << "Yes\n";
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
