#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	vector<int> count(105, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		count[abs(a[i])]++;
	}
	int res = 0;
	if (count[0] >= 1) {
		res++;
	}
	for (int i = 1; i <= 100; i++) {
		if (count[i] >= 3) {
			res += 2;
		}
		else {
			res += count[i];
		}
	}
	cout << res << '\n';
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
