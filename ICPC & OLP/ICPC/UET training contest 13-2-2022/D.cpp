#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void run_case() {
	ordered_set s;
	int q;
	cin >> q;
	char c;
	int x;
	int maxn = 1e7 + 5;
	int cnt = 1;
	vector<int> v(maxn);
	for (int i = 1; i <= q; i++) {
		cin >> c;
		if (c == 'L') {
			s.insert(-cnt);
			v[cnt] = -cnt;
			cnt++;
		}
		if (c == 'R') {
			s.insert(cnt);
			v[cnt] = cnt;
			cnt++;
		}
		if (c == 'G') {
			cin >> x;
			s.erase(s.lower_bound(v[x]));
		}
		if (c == 'Q') {
			int t = s.size();
			cout << abs(*s.find_by_order(t / 2)) << '\n';
		}
//		for (auto t : s) {
//			cout << t << " ";
//		}
//		cout << '\n';
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
