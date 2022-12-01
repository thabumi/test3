#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum != 0) {
		cout << "No\n";
		return;
	}
	if (a[0] < 0) {
		cout << "No\n";
		return;
	}
	long long step = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] != 0 && step == 0) {
			cout << "No\n";
			return;
		} 
		step = a[i] + step;
		if (step < 0) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
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
