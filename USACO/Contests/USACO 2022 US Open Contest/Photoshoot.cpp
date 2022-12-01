#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'G') {
			v.push_back(i + 1);
		}
	}
	vector<int> t;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2 != 0 && i < v.size() - 1 && v[i + 1] == v[i] + 1) {
			continue;
		}
		else if (v[i] % 2 == 0 && i > 0 && v[i - 1] == v[i] - 1) {
			continue;
		}
		t.push_back(v[i]);
	}
//	for (auto g : t) {
//		cout << g << " ";
//	}
//	cout << '\n';
//	return;
	while (!t.empty() && t.back() % 2 == 0) {
		t.pop_back();
	}
	if (t.empty()) {
		cout << "0" << '\n';
		return;
	}
	int cnt = 1;
	for (int i = 1; i < t.size(); i++) {
		if (t[i] % 2 != t[i - 1] % 2) {
			cnt++;
		}
	}
//	for (int i = 0; i < v.size() - 1; i++) {
//		if (v[i] % 2 == 1 && v[i + 1] != v[i] + 1 && v[i + 1] % 2 == 0) {
//			cnt++;
//		}
//	}
//	if (v[v.size() - 1] % 2 == 1) {
//		cnt++;
//	}
	cout << cnt << '\n';
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
