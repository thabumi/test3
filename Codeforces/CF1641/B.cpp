#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	for (auto t : m) {
		if (t.second & 1) {
			cout << -1 << '\n';
			return;
		}
	}
	vector<pair<int, int>> op;
	vector<int> res;
	int beg = 0;
	vector<int> Res;
	while (beg < a.size()) {
		int st = a[beg];
		int i = beg + 1;
		while (i < a.size()) {
			if (a[i] == st) {
				break;
			}
			res.emplace_back(a[i]);
			i++;
		}
		for (int j = beg + 1; j < i; j++) {
			op.emplace_back(make_pair(j + (i - beg), a[j]));
		}
		vector<int> res2(res.rbegin(), res.rend());
		res.insert(res.end(), res2.begin(), res2.end());
		a.insert(a.begin() + i + 1, res.begin(), res.end());
		res.clear();
		Res.emplace_back(2 * (i - beg));
		beg = i * 2 - beg;
	}
	
//	for (auto t : a) {
//		cout << t << " ";
//	}
//	cout << '\n';
	cout << op.size() << '\n';
	for (auto t : op) {
		cout << t.first << " " << t.second << '\n';
	}
	cout << Res.size() << '\n';
	for (auto t : Res) {
		cout << t << " ";
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
