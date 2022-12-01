#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<long long> t(n);
	vector<pair<char, long long>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	int res = 1e9;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (v[j].first == 'L' && v[j].second < v[i].second) {
				cnt++;
			}
			if (v[j].first == 'G' && v[j].second > v[i].second) {
				cnt++;
			}
		}
		res = min(cnt, res);
	}
	cout << res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
		run_case();
	}
	return 0;	
}
