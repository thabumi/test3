#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mx = 1;
	vector<int> v;
	v.push_back(-1);
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			v.push_back(i);
		}
	}
	v.push_back(n);
	for (int i = 0; i < v.size() - 1; i++) {
		int cnt = 0;
		vector<int> t;
		for (int j = v[i] + 1; j < v[i + 1]; j++) {
			if (a[j] < 0) {
				t.push_back(j);
			}
		}
		if (v[i + 1] - v[i] - 1 == t.size() && t.size() == 1) {
			continue;
		}
		if (t.size() % 2 == 0) {
			mx = max(v[i + 1] - v[i] - 1, mx);
		}
		else {
			mx = max(mx, max(t[t.size() - 1] - v[i] - 1, v[i + 1] - t[0] - 1));
		}
	}
	cout << mx;
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
