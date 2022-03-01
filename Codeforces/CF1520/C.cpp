#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << '\n';
		return;
	}
	if (n == 2) {
		cout << - 1 << '\n';
		return;
	}
	vector<int> v;
	for (int i = 1; i <= n * n; i += 2) {
		v.push_back(i);
	}
	for (int i = 2; i <= n * n; i += 2) {
		v.push_back(i);
	}
	for (int i = 0; i < n * n; i++) {
		cout << v[i] << " ";
		if ((i + 1) % n == 0) {
			cout << '\n';
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
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
