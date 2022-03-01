#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	int n;
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return;
	}
	if (n == 1) {
		cout << 1;
		return;
	}
	if (n % 2 == 1) {
		for (int i = n; i >= 1; i -= 2) {
			cout << i << " ";
		}
		for (int i = n - 1; i >= 2; i -= 2) {
			cout << i << " ";
		}
	}
	else {
		for (int i = n - 1; i >= 1; i -= 2) {
			cout << i << " ";
		}
		for (int i = n; i >= 2; i -= 2) {
			cout << i << " ";
		}
	}
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