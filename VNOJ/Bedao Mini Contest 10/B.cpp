#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long a, T;
	cin >> a >> T;
	if (T % a != 0) {
		cout << -1;
		return;
	}
//	long long k = T / a;
	for (int i = 2; i <= sqrt(T); i++) {
		if (T % i == 0) {
			long long x = 1;
			while (T % i == 0) {
				T /= i;
				x *= i;
			}
			if (T > 1) {
				cout << x << " " << T;
				return;
			}
			else {
				if (T == a) {
					if (T == i) {
						cout << -1;
						return;
					}
					else {
						cout << i << " " << i;
						return;
					}
				}
				else {
					cout << -1;
					return;
				}
			}
		}
	}
	cout << -1;
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
