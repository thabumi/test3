#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long mn[n];
	for (int i = 0; i < n; i++) {
		mn[i] = *(lower_bound(b, b + n, a[i])) - a[i];
	}
	long long mx[n];
	mx[n - 1] = b[n - 1] - a[n - 1];
	vector<int> v;
	for (int i = 1; i < n; i++) {
		if (a[i] > b[i - 1]) {
			v.push_back(i);
		}
	}
//	for (auto t : v) {
//		cout << t << " ";
//	}
//	cout << '\n';
	for (int i = 0; i < n - 1; i++) {
		auto t = upper_bound(v.begin(), v.end(), i);
		if (t == v.end()) {
			mx[i] = b[n - 1] - a[i];
			continue;
		}
		
//		auto t = lower_bound(v.begin(), v.end(), i);
//		if (t == v.end()) {
//			mx[i] = b[n - 1] - a[i];
//			continue;
//		}
		int tt = (int)(t - v.begin());
//		t--;
		
//		cout << v[tt] << " ";
		mx[i] = b[max(v[tt] - 1, i)] - a[i];
	}
//	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << mn[i] << " ";
	}
	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << mx[i] << " ";
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
