#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	vector<vector<long long>> v(1001, vector<long long>(1001, 0));
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v[x][y] += x * y;
	}
	vector<vector<long long>> pref(1001, vector<long long>(1001, 0));
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= 1000; j++) {
			pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + v[i][j];
		}
	}
	for (int i = 0; i < q; i++) {
		int x, y, X, Y;
		cin >> x >> y >> X >> Y;
		if (x + 1 <= X - 1 && y + 1 <= Y - 1) {
			cout << pref[X - 1][Y - 1] - pref[x][Y - 1] - pref[X - 1][y] + pref[x][y] << '\n';
		}
		else {
			cout << 0 << '\n';
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
