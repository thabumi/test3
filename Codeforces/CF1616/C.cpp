#include <bits/stdc++.h>
 
using namespace std;

bool eq(double a, double b) {
	if (abs(a - b) < 1e-7){
		return true;
	}
	return false;
}

void run_case() {
	int n;
	cin >> n;
	double a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	double d;
	int m = 1e9;
	if (n <= 2) {
		cout << 0 << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int count = 0;
			d = (a[j] - a[i]) / (j - i);
			for (int k = 0; k < n; k++) {
				if (!eq(a[k], a[i] - (d * (i - k)))) {
					count++;
				}
			}
			m = min(m, count);
		}
	}
	cout << m << '\n';
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
