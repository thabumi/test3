#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	if (k == 1) {
		cout << "YES\n";
		for (int i = 1; i <= n; i++) {
			cout << i << '\n';
		}
		return;
	}
	if (n % 2 == 1) {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
		vector<int> odd;
		vector<int> even;
		for (int i = 1; i <= n * k; i++) { 
			if (i % 2 == 1) {
				odd.emplace_back(i);
			}
			else {
				even.emplace_back(i);
			}
		}
		for (int i = 0; i < odd.size(); i++) {
			cout << odd[i] << " ";
			if ((i + 1) % k == 0) {
				cout << '\n';
			}
		}
		for (int i = 0; i < even.size(); i++) {
			cout << even[i] << " ";
			if ((i + 1) % k == 0) {
				cout << '\n';
			}
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
