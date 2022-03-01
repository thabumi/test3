#include <bits/stdc++.h>

using namespace std;

int a[100000 + 5];

struct SegTree {
	multiset<int> st[400000 + 5];
	void build(int id, int l, int r) {
		if (l == r) {
			st[id] = {a[l]};
			return;
		}
		int mid = (l + r) >> 1;
		build(id << 1, l, mid);
		build(id << 1 | 1, mid + 1, r);
		st[id] = st[id << 1];
//		st[id].insert(st[id * 2].begin(), st[id * 2].end());
		st[id].insert(st[id << 1 | 1].begin(), st[id << 1 | 1].end());
//		for (auto t : st[id * 2]) {
//			st[id].insert(t);
//		}
//		for (auto t : st[id * 2 + 1]) {
//			st[id].insert(t);
//		}
	}
	void update(int id, int l, int r, int u, int v) {
		if (u < l || r < u) {
			return;
		}
//		cout << st[id].size() << " range: " << l << " " << r << " element: ";
//		for (auto k : st[id]) {
//			cout << k << " ";
//		}
//		cout << endl;
//		assert(st[id].find(a[u]) != st[id].end());
		st[id].erase(st[id].lower_bound(a[u]));
		st[id].insert(v);
//		auto t = lower_bound(st[id].begin(), st[id].end(), a[u]);
//		*t = 
		
		if (l != r) {
			int mid = (l + r) >> 1;
			update(id << 1, l, mid, u, v);
			update(id << 1 | 1, mid + 1, r, u, v);
		}
		
	}
	int query(int id, int l, int r, int L, int R, int k) {
		if (R < l || r < L) {
			return 1e9 + 5;
		}
		if (L <= l && r <= R) {
			auto t = st[id].lower_bound(k);
			if (t == st[id].end()) {
				return 1e9 + 5;
			}
			else {
				return *t;
			}
		}
		int mid = (l + r) >> 1;
		return min(query(id << 1, l, mid, L, R, k), query(id << 1 | 1, mid + 1, r, L, R, k));
	}
} s;



void run_case() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	s.build(1, 1, n);
	for (int i = 1; i <= m; i++) {
		int k;
		cin >> k;
		if (k == 1) {
			int u, v;
			cin >> u >> v;
			s.update(1, 1, n, u, v);
			a[u] = v;
		}
		else {
			int l, r, val;
			cin >> l >> r >> val;
			int res = s.query(1, 1, n, l, r, val);
			if (res == 1e9 + 5) {
				cout << -1 << '\n';
			}
			else {
				cout << res << '\n';
			}
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
