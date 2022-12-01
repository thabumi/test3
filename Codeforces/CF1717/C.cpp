#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
//	return;
	int equal = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > b[i]) {
			cout << "NO\n";
			return;
		}
		else if (a[i] == b[i]) {
			equal = i;
		}
	}
	if (equal != -1) {
		int mx = b[equal] + 1;
		int i = (equal - 1 + n) % n;
		while (i != equal) {
			if (a[i] < b[i] && mx < b[i]) {
				cout << "NO\n";
				return;
			}
			mx = b[i] + 1;
			i = (i - 1 + n) % n;
		}
		cout << "YES\n";
		return;
	}
//	return;
	
	for (int i = 0; i < n - 1; i++) {
		if (b[i] - b[i + 1] >= 2) {
			cout << "NO\n";
			return;
		}
	}
	if (b[n - 1] - b[0] >= 2) {
		cout << "NO\n";
		return;
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
