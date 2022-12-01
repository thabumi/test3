#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	double a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	a[n] = 1e9;
	int count = 1;
	double res = 0;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (a[i] > a[i + 1]) {
			count++;
		}
		else {
			sum /= count;
			for (int j = i; j > i - count; j--) {
				res += (sum - a[j]) * (sum - a[j]);
			}
			count = 1;
			sum = 0;
		}
	}
	cout << fixed << setprecision(12) <<  sqrt(res);
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


