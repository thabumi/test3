#include <bits/stdc++.h>

using namespace std;
#define int long long
const int INF = 2e18 + 10;
int a[100000 + 5];
int m;
struct SegTree {
	int st[400000 + 20];
//	int lazy[400000 + 20];
	void build(int id, int l, int r) {
		if (l == r) {
			st[id] = a[l];
			return;
		}
		int mid = (l + r) / 2;
		build(id * 2, l, mid);
		build(id * 2 + 1, mid + 1, r);
		st[id] = min(st[id * 2], st[id * 2 + 1]);
	}
	void update(int id, int l, int r, int i, int v) {
	    if (i < l || r < i) {
	        return ;
	    }
	    if (l == r) {
	        st[id] = v;
	        return ;
	    }
	
	    int mid = (l + r) / 2;
	    update(id * 2, l, mid, i, v);
	    update(id * 2 + 1, mid + 1, r, i, v);
	    st[id] = min(st[id * 2], st[id * 2 + 1]);
	}
	void update(int i, int v) {
		update(1, 1, m, i, v);
	}
	int query(int id, int l, int r, int L, int R) {
 		if (R < l || r < L) {
 			return INF;
		}
		if (L <= l && r <= R) {
			return st[id];
		} 
		int mid = (l + r) / 2;
		return min(query(id * 2, l, mid, L, R), query(id * 2 + 1, mid + 1, r, L, R));
	}
	int query(int L, int R) {
		return query(1, 1, m, L, R);
	}
//	void down(int id) {
//	    int t = lazy[id];
//	    lazy[id * 2] += t;
//	    st[id * 2] += t;
//	    lazy[id * 2 + 1] += t;
//	    st[id * 2 + 1] += t;
//	    lazy[id] = 0;
//	}
//	void update(int id, int l, int r, int L, int R, int val) {
//	    if (R < l || r < L) {
//	        return ;
//	    }
//	    if (L <= l && r <= R) {
//	        st[id] += val;
//	        lazy[id] += val;
//	        return;
//	    }
//	    int mid = (l + r) / 2;
//	    down(id);
//	    update(id * 2, l, mid, L, R, val);
//	    update(id * 2 + 1, mid + 1, r, L, R, val);
//	    st[id] = max(st[id * 2], st[id * 2 + 1]);
//	}
//	int query(int id, int l, int r, int L, int R) {
//		if (R < l || r < L) {
//			return -INF;
//		}
//		if (L <= l && r <= R) {
//			return st[id];
//		}
//		int mid = (l + r) / 2;
//		down(id);
//		return max(query(id * 2, l, mid, L, R), query(id * 2 + 1, mid + 1, r, L, R));
//	}
} St;
void run_case() {
	int n, k;
	cin >> m >> n >> k;
	int b[n + 2];
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	b[0] = -INF;
	b[n + 1] = INF;
	sort(b + 1, b + n + 1);
	for (int i = 1; i <= m; i++) {
		int t = (int)(lower_bound(b + 1, b + n + 1, a[i]) - b);
//		if (t == n + 1) {
//			a[i] = abs(b[t - 1] - a[i]);
//		}
//		else if (t == 1) {
//			a[i] = abs(b[t] - a[i]);
//		}
//		else {
			a[i] = min(abs(b[t] - a[i]), abs(b[t - 1] - a[i]));
//		}
	}
	St.build(1, 1, m);
//	for (int i = 1; i <= m; i++) {
//		cout << a[i] << " ";
//	}
//	return;
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		cout << St.query(x, y) << '\n';
	}
}

signed main() {
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
