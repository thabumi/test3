#include <bits/stdc++.h>
 
using namespace std;
const int INF = 1e9 + 100;
const int N = 2e5 + 5;
int a[N];
int n;
struct SegTree {
	int st[N * 4];
//	int lazy[400000 + 20];
	void build(int id, int l, int r) {
		if (l == r) {
			st[id] = a[l];
			return;
		}
		int mid = (l + r) / 2;
		build(id * 2, l, mid);
		build(id * 2 + 1, mid + 1, r);
		st[id] = max(st[id * 2], st[id * 2 + 1]);
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
	    st[id] = max(st[id * 2], st[id * 2 + 1]);
	}
	void update(int i, int v) {
		update(1, 1, n, i, v);
	}
	int query(int id, int l, int r, int L, int R) {
 		if (R < l || r < L) {
 			return -INF;
		}
		if (L <= l && r <= R) {
			return st[id];
		} 
		int mid = (l + r) / 2;
		return max(query(id * 2, l, mid, L, R), query(id * 2 + 1, mid + 1, r, L, R));
	}
	int query(int L, int R) {
		return query(1, 1, n, L, R);
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
	int m;
	cin >> m >> n;
	//m,n in statement = n,m in code
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	St.build(1, 1, n);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x0, y0, x1, y1, k;
		cin >> x0 >> y0 >> x1 >> y1 >> k;
		if ((x1 - x0) % k != 0 || (y1 - y0) % k != 0) {
			cout << "NO\n";
			continue;
		}
		if (y0 == y1) {
			cout << "YES\n";
			continue;
		}
		x0 = x0 + k * ((m - x0) / k);
//		cout << x0 << ' ' << y0 << '\n';
		if (y0 < y1) {
//			cout << St.query(y0, y1) << '\n';
			if (St.query(y0, y1) < x0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			if (St.query(y1, y0) < x0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
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
