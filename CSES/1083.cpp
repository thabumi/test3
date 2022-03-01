#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	int n;
	cin >> n;
	vector<int> v(n + 1, 1);
	int x;
	for (int i = 0; i < n - 1; i++) {
		cin >> x;
		v[x]--;
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == 1) {
			cout << i;
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