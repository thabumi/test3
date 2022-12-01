#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	long  long a[n];
	long long sum = 0;
	int odd = 0, even = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		sum += a[i];
	}
//	cout << sum << '\n';
	for (int i = 0; i < q; i++) {
		int typ;
		long long x;
		cin >> typ >> x;
		if (typ == 0) {
			sum += even * x;
			if (x % 2 != 0) {
				
				even = 0;
				odd = n;
			}
		}
		else {
			sum += odd * x;
			if (x % 2 != 0) {
				
				odd = 0;
				even = n;
			}
		}
		cout << sum << '\n';
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
