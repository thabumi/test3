#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		v[i] = {a[i], i + 1};
	}
	sort(v.begin(), v.end());
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r, x;
		cin >> l >> r >> x;
		auto beg = lower_bound(v.begin(), v.end(), make_pair(x, l));
		auto en = upper_bound(v.begin(), v.end(), make_pair(x, r));
//		cout << (int)(beg - v.begin()) << " " << (int)(en - v.begin()) << " ";
		cout << (int)(en - beg) << '\n';;
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
