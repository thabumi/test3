#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int n = s.size();
	
//	return;
	vector<int> res;
	int cnt = 0;
	if (s[0] <= s[n - 1]) {
		int n = s.size();
		vector<pair<int, int>> p(n);
		for (int i = 0; i < n; i++) {
			p[i] = {(int)(s[i]), i + 1};
		}
		sort(p.begin(), p.end());
		
		for (int i = 0; i < n; i++) {
			if (p[i].first >= (min)((int)s[0], (int)(s[n - 1])) && p[i].first <= (max)((int)s[0], (int)(s[n - 1]))) {
				res.push_back(p[i].second);
				cnt++;
			}
		}
	}
	else {
		vector<pair<int, int>> p(n);
		for (int i = 0; i < n; i++) {
			p[i] = {(int)(s[i]), -(i + 1)};
		}
		sort(p.begin(), p.end(), greater<pair<int,int>>());
//		vector<int> res;
//		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (p[i].first >= (min)((int)s[0], (int)(s[n - 1])) && p[i].first <= (max)((int)s[0], (int)(s[n - 1]))) {
				res.push_back(p[i].second);
				cnt++;
			}
		}
	}
	
	cout << abs((int)(s[n - 1] - s[0])) << " " << cnt << '\n';
	for (auto t : res) {
		cout << abs(t) << " ";
	}
	cout << '\n';
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
