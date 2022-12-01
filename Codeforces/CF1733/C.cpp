#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << 0 << '\n';
		return;
	}
	vector<pair<int, int>> res;
	res.push_back({1, n});
	int checker;
	if ((a[0] + a[n - 1]) % 2 == 0) {
		checker = a[n - 1];
	}
	else {
		checker = a[0];
	}
	for (int i = 1; i < n - 1; i++) {
		if ((a[i] + checker) % 2 == 0) {
			res.push_back({i + 1, n});
		}
		else {
			res.push_back({1, i + 1});
		}
	}
	cout << res.size() << '\n';
	for (auto [x, y] : res) {
		cout << x << " " << y << '\n';
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
