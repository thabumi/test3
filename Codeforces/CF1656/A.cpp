#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n + 1];
	long long mx = -1e18;
	int ind = 0;
	long long mn = 1e18;
	int ind2 = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > mx) {
			mx = a[i];
			ind = i;
		}
		if (a[i] < mn) {
			mn = a[i];
			ind2 = i;
		}
	}
	cout << ind << " " << ind2 << '\n';
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
