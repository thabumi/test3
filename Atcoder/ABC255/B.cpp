#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	double eps = 1e-10;
	int n, k;
	cin >> n >> k;
	int a[k];
	for (int i = 0; i < k; i++) {
		cin >> a[i];
		a[i]--;
	}
	double p[n][2];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> p[i][j];
		}
	}
	double left = 0;
	double right = 1e9;
	while (left + 1e-7 < right) {
		double mid = (left + right) / 2;
		bool allok = true;
		for (int i = 0; i < n; i++) {
			bool ok = false;
			for (int j = 0; j < k; j++) {
				int t = a[j];
				if (sqrt((p[t][0] - p[i][0]) * (p[t][0] - p[i][0]) + (p[t][1] - p[i][1]) * (p[t][1] - p[i][1])) < mid) {
					ok = true;
					break;
				}
			}
			if (!ok) {
				allok = false;
				break;
			}
		}
		if (!allok) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	cout << setprecision(14) << right;
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
