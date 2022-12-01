#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	long long a[n + 1];
	long long c[n + m + 1];
	for (int i = n; i >= 0; i--) {
		cin >> a[i];
	}
	for (int i = n + m; i >= 0; i--) {
		cin >> c[i];
	}
	vector<long long> b;
	for (int i = 0; i <= m; i++) {
		long long k = c[i] / a[0];
		b.push_back(k);
		for (int j = i; j <= i + n; j++) {
			c[j] -= k * a[j - i];
		}
	}
	for (int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
