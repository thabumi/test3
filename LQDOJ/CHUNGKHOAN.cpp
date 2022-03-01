#include <bits/stdc++.h>
 
using namespace std;


void run_case() {
	int n;
	cin >> n;
	map<long long, int> m;
	vector<vector<long long>> v(n, vector<long long>(3));
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'A') {
			v[i][2] = -1;
		}
		else {
			v[i][2] = 1;
		}
		cin >> v[i][0] >> v[i][1];
		m[v[i][0]] = 1;
	}
	sort(v.begin(), v.end());
	
//	long long res1 = 0;//-1e9
//	long long res2 = 0;//1e9
//	for (int i = 0; i < n; i++) {
//		if (v[i][0] == -1e9) {
//			res1 -= v[i][1];
//		}
//		else {
//			res1 += 1LL * v[i][2] * v[i][1];
//		}
//		if (v[i][0] == 1e9) {
//			res2 -= v[i][1];
//		}
//		else {
//			res2 -= 1LL * v[i][2] * v[i][1];
//		}
//		res2 -= 1LL * v[i][2] * v[i][1];
//	}
	
	vector<long long> sum(n + 1, 0);
	vector<long long> sum2(n);
	for (int i = 0; i < n; i++) {
		sum[0] += 1LL * v[i][1] * v[i][2];
	}
	sum2[0] = sum[0];
	if (v[0][2] == 1) {
		sum2[0] = sum[0] - 2LL * v[0][1];
	}
//	if (sum2[0] == 51615955570) {
//		cout << 1 << " ";
//	}
	for (int i = 1; i <= n; i++) {
//		if (v[i - 1][0] == 1e9) {
//			sum[i] = sum[i - 1];
//			continue;
//		}
		sum[i] = sum[i - 1] - 2LL * v[i - 1][2] * v[i - 1][1];
		if (i == n) {
			continue;
		}
		if (v[i][0] != v[i - 1][0]) {
			if (v[i][2] == 1) {
				sum2[i] = sum[i] - 2LL * v[i][1];
			}
			else {
				sum2[i] = sum[i];
			}
		}
		else {
			if (v[i][2] == 1) {
				sum2[i] = sum2[i - 1] - 2LL * v[i][1];
			}
			else {
				sum2[i] = sum2[i - 1];
			}
		}
//		if (v[i][0] == -991) {
//			cout << sum2[i] << " ";
//		}
//		if (sum2[i] == 51615955570) {
//			cout << v[i][0] << " " << i << " " << 1 << " ";
//		}
//		sum2[i] = sum[i] - 1LL * v[i][1] * v[i][2] - v[i][1];
	}
	long long mx = sum[0];
	long long res = -1e9;
	if (m[(long long)(-1e9)]) {
		mx = -1e18;
	}
//	if (m[(long long)(1e9)]) {
//		cout << "true ";
//	}
//	if (m[-991]) {
//		cout << "true ";
//	}
//	int ind = 0;
	for (int i = 1; i <= n; i++) {
		if (i < n && v[i - 1][0] == v[i][0]) {
			
			continue;
		}
		if (i == n && v[i - 1][0] == 1e9) {
			continue;
		}
		if (m[v[i - 1][0] + 1]) {
			continue;
		}
		if (mx < sum[i] && v[i - 1][0] != 1e9) {
			mx = sum[i];
//			ind = i;
			res = v[i - 1][0] + 1;
		}
		
	}
	for (int i = 0; i < n; i++) {
		if (i < n - 1 && v[i][0] == v[i + 1][0]) {
//			if (sum2[i] < sum2[i + 1]) {
//				cout << "Not ok ";
//			}
			continue;
		}
		
		if (mx < sum2[i]) {
			mx = sum2[i];
//			ind = i;
			res = v[i][0];
//			cout << 2 << " ";
		}
		
	}
//	for (int i = 0; i <= n; i++) {
//		cout << sum[i] << " ";
//	}
//	cout << '\n';
//	for (int i = 0; i < n; i++) {
//		cout << sum2[i] << " ";
//	}
//	cout << '\n';
	cout << res << " " << mx;
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
