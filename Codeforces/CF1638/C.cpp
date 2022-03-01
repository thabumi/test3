#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mx = a[0];
	int cnt = 0;
	long long sum = 0;
	for (long long i = 0; i < n; i++) {
		sum += a[i];
		if (sum == (i + 1) * (i + 2) / 2) {
			cnt++;
		}
	}
	cout << cnt << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
