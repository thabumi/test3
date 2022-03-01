#include <bits/stdc++.h>
 
using namespace std;

int cir(int a, int b) {
	return (a + b) % 360;
}

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> v(1, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < v.size(); j++) {
			v[j] = cir(v[j], a[i]);
		}
		v.push_back(0);
	}
	sort(v.begin(), v.end());
	int mx = 0;
	for (int i = 1; i < v.size(); i++) {
		mx = max(mx, v[i] - v[i - 1]);
	}
	mx = max(mx, v[0] + 360 - v[v.size() - 1]);
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
