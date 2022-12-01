#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	int a[n];
	vector<vector<int>> query(q, vector<int>(3));
	for (int i = 0; i < q; i++) {
		int in, j, x;
		cin >> in >> j >> x;
		in--;
		j--;
		a[in] &= x;
		a[j] &= x;
		query[i][0] = in;
		query[i][1] = j;
		query[i][2] = x;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << '\n';
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
