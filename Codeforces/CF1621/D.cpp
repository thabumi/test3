#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long Min = 1e18;
	long long a[2 * n + 2][2 * n + 2];
	long long sum = 0;
	for (int i = 1; i <= 2 * n ; i++) {
		for (int j = 1; j <= 2 * n; j++) {
			cin >> a[i][j];
			if (i >= n + 1 && j >= n + 1) {
				sum += a[i][j];
			}
			if ((i - n - 1) * (i - 2 * n) == 0 && (j - 1) * (j - n) == 0) {
				Min = min(Min, a[i][j]);
			}
			if ((j - n - 1) * (j - 2 * n) == 0 && (i - 1) * (i - n) == 0) {
				Min = min(Min, a[i][j]);
			}
		}
	}
	
	sum += Min;
	cout << sum << '\n';
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
