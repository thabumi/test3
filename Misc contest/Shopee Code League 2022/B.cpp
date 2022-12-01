#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	int n;
	cin >> n;
	int w[n];
	vector<bool> possible(10005, 0);
	possible[0] = true;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < n; i++) {
		for (int x = 10000; x >= 0; x--) {
			if (possible[x]) {
				possible[x + w[i]] = true;
			}
		}
	}
	for (int i = 10000; i >= 0; i -= 2) {
		if (possible[i] && possible[i / 2]) {
			cout << i / 2;
			return;
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