#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long x;
	cin >> x;
	for (int i = 0; i < n; i++) {
		a[i] -= x;
	}
	long long sum = 0;
	long long sum2 = 0;
	int count = 0;
	int res = n;
	for (int i = 0; i < n; i++) {
		
		if (a[i] + sum2 < 0 && count >= 1) {
			i++;
			res--;
			sum = 0;
			count = 0;
			sum2 = 0;
		}	
		sum2 = min(sum2 + a[i], a[i]);
		count++;
	}
	cout << res << '\n';
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
