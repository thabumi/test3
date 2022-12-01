#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	vector<long long> mx(k, 0LL);
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		mx[i % k] = max(mx[i % k], a[i]);
	}
	long long sum = 0;
	for (int i = 0; i < k; i++) {
		sum += mx[i];
	}
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
