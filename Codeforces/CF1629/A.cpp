#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
	}
	for (int i = 0; i < n; i++) {
		cin >> v[i].second;
	}
	sort(v.begin(), v.end());
	int i = 0;
	while (i < n) {
		if (v[i].first <= k) {
			k += v[i].second;
			i++;
		}
		else {
			break;
		}
	}
	cout << k << '\n';
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
