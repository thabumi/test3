#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	multiset<int> s;
	int n, m, c;
	cin >> n >> m >> c;
	int a[n + 5];
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i < m) {
			s.insert(a[i]);
		}
	}
	vector<int> res;
	s.insert(0);
	for (int i = m; i <= n; i++) {
		s.erase(s.find(a[i - m]));
		s.insert(a[i]);
		if(*s.rbegin() - *s.begin() <= c) res.push_back(i - m + 1);
	}
	if (res.empty()) {
		cout << "NONE\n";
	}
	else {
		for (auto i : res) {
			cout << i << '\n';
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
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


