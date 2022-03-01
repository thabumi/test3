#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;

	vector<tuple<int, int, int>> v(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		get<0>(v[i]) = x;
		get<2>(v[i]) = i;
		
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		get<1>(v[i]) = x;
	}
	if (n == 1) {
		cout << 1 << '\n';
		return;
	}
	sort(v.begin(), v.end());
	vector<pair<int, int>> t(n);
	for (int i = 0; i < n; i++) {
		t[i].first = get<1>(v[i]);
		t[i].second = get<2>(v[i]);
	}
//	for (int i = 0; i < n; i++) {
//		cout << t[i].second << " " << t[i].first << '\n';
//	}
	vector<int> Max(n + 1);
	vector<int> Min(n + 1);
	Max[0] = t[0].first;
	Min[n - 1] = t[n - 1].first;
	for (int i = 1; i < n; i++) {
		Max[i] = max(Max[i - 1], t[i].first);
	}
	for (int i = n - 2; i >= 0; i--) {
		Min[i] = min(Min[i + 1], t[i].first);
	}
	int ind = -1;
	for (int i = n - 2; i >= 0; i--) {
		if (Max[i] < Min[i + 1]) {
			ind = i;
			break;
		}
	}
	vector<char> c(n);
	for (int i = 0; i < n; i++) {
		if (i <= ind) {
			c[t[i].second] = '0';
		}
		else {
			c[t[i].second] = '1';
		}
	}
	for (int i = 0; i < n; i++) {
		cout << c[i];
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


