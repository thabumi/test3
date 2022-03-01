#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	int x;
	map<int, int> a;
	map<int, int> b;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x]++;
	}
	int B[m];
	for (int i = 0; i < m; i++) {
		cin >> B[i];
		b[B[i]]++;
	}
	for (int i = 0; i < m; i++) {
		if (b[B[i]] > a[B[i]]) {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
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
