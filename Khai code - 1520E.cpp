#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	char c[n];
	int cnt = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		if (c[i] == '*') {
			cnt++;
			v.push_back(i);
		}
	}
	if (cnt == 0 || cnt == 1) {
		cout << 0 << '\n';
		return;
	}
	long long res = 0;
	if (cnt % 2 == 0) {
		int mid = v[cnt / 2];
		int first = mid - cnt / 2;
		for (int i = 0; i < cnt; i++) {
			res += abs(first + i - v[i]);
		}
		cout << res << '\n';
	}
	else {
		int mid = v[cnt / 2];
		int first = mid - cnt / 2;
		for (int i = 0; i < cnt; i++) {
			res += abs(first + i - v[i]);
		}
		cout << res << '\n';
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
