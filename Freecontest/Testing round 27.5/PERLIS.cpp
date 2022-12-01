#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n + 5];
	set<pair<int, int>> s;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s.insert({a[i], i});
	}
	int i = n;
	vector<int> val(n + 5);
	for (auto t : s) {
		val[t.second] = i;
		i--;
	}
	for (int i = 1; i <= n; i++) {
		cout << val[i] << " ";
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
