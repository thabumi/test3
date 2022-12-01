#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> m >> n;
	m *= 2;
	vector<int> coo(n);
	vector<int> wei(n);
	for (int i = 0; i < n; i++) {
		cin >> coo[i] >> wei[i];
	}
	vector<vector<int>> v(n, vector<int>(3));
	for (int i = 0; i < n; i++) {
		v[i][1] = coo[i];
		v[i][0] = wei[i];
		v[i][2] = i + 1;
	}
//	return;
	sort(v.begin(), v.end());
//	for (auto t : v) {
//		for (auto s : t) {
//			cout << s << " ";
//		}
//		cout << '\n';
//	}
//	return;
//	cout << '\n';
//	return;
	long long sum = 0;
	for (int i = 0; i < m; i++) {
		swap(v[i][0], v[i][1]);
		sum += v[i][1];
	}
	sort(v.begin(), v.begin() + m);
	cout << sum << '\n';
	for (int i = 0; i < m / 2; i++) {
		cout << v[i][2] << " " << v[m - 1 - i][2] << '\n';
	}
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
