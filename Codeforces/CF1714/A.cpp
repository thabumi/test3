#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, H, M;
	cin >> n >> H >> M;
	pair<int, int> a = {H, M};
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	sort(p.begin(), p.end());
	auto t = lower_bound(p.begin(), p.end(), a);
	if (t == p.end()) {
		int h = 0;
		h = p[0].first + 24 - H;
		int m = p[0].second - M;
		if (m < 0) {
			m += 60;
			h--;
		}
		cout << h << " " << m << '\n';
	}
	else {
		int h = t->first - H;
		int m = t->second - M;
		if (m < 0) {
			m += 60;
			h--;
		}
		cout << h << " " << m << '\n';
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
