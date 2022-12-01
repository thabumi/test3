#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool canMoveRight = 1;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] + 3 < a[i + 1]) {
			cout << "NO\n";
			return;
		}
		else if (a[i] + 3 == a[i + 1]) {
			if (canMoveRight) {
				a[i]++;
				a[i + 1]--;
				canMoveRight = 0;
			}
			else {
				cout << "NO\n";
				return;
			}
		}
		else if (a[i] + 2 == a[i + 1]) {
			if (canMoveRight) {
				a[i]++;
				canMoveRight = 0;
			}
			else {
				a[i + 1]--;
			}
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
