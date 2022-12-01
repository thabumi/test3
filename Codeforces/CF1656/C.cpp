#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	bool have0 = false;
	bool have1 = false;
	bool have2 = false;
	bool haveelse = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			have0 = true;
		}
		else if (a[i] == 1) {
			have1 = true;
		}
		else if (a[i] == 2) {
			have2 = true;
		}
		else {
			haveelse = true;
		}
	}
	if (!have1) {
		cout << "YES\n";
		return;
	}
	if (have0 || have2) {
		cout << "NO\n";
		return;
	}
	sort(a, a + n);
	for (int i = 0; i < n - 1; i++) {
		if (a[i] + 1 == a[i + 1]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
