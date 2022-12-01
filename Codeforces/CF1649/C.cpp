#include <bits/stdc++.h>
 
using namespace std;

#define int long long

void run_case() {
	int n, m;
	cin >> n >> m;
	long long a[n][m];
	vector<vector<int>> v((int)1e5 + 1, vector<int>(2, 0));
	vector<vector<int>> t((int)1e5 + 1, vector<int>(2, 0));
	long long sum = 0;
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < m; j++) {
			cin >> a[i][j];
			int cl = a[i][j];
//			if (cl == 3) {
				sum += i * v[cl][0] - v[cl][1];
				v[cl][0]++;
				v[cl][1] += i;
//			}
			
		}
	}
	for (long long j = 0; j < m; j++) {
		for (long long i = 0; i < n; i++) {
//			cin >> a[i][j];
			int cl = a[i][j];
//			if (cl == 3) {
				sum += j * t[cl][0] - t[cl][1];
				t[cl][0]++;
				t[cl][1] += j;
//			}
			
		}
	}
	cout << sum;
}

signed main() {
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
