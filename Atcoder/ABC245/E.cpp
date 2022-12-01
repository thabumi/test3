#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	vector<pair<long long, long long>> choco(n);
	vector<pair<long long, long long>> box(m);
	for (int i = 0; i < n; i++) {
		cin >> choco[i].first;
	}
	for (int i = 0; i < n; i++) {
		cin >> choco[i].second;
	}
	for (int i = 0; i < m; i++) {
		cin >> box[i].first;
	}
	for (int i = 0; i < m; i++) {
		cin >> box[i].second;
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
