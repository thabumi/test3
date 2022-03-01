#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	long long sum[n + 5];
	sum[0] = 0;
	for (int i = 0; i <= n; i++) {
		sum[i + 1] = sum[i] + (s[i] - 'a' + 1);
	}
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		cout << sum[y] - sum[x - 1] << '\n';
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
