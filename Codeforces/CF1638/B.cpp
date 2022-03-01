#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			v1.push_back(a[i]);
		}
		else {
			v2.push_back(a[i]);
		}
	}
	
	for (int i = 1; i < v1.size(); i++) {
		if (v1[i] < v1[i - 1]) {
			cout << "No\n";
			return;
		}
	}
	for (int i = 1; i < v2.size(); i++) {
		if (v2[i] < v2[i - 1]) {
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
