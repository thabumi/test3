#include <bits/stdc++.h>
 
using namespace std;
#define int long long
/*
MaxSegTree
Complexity: O(nlogn) for building the tree, O(logn) for each query
*/ 
const int INF = 1e9 + 10;
const int N = 2e5 + 5;
int a[N];
int n;
struct SegTree {
	int st[N * 4];
	int lazy[N * 4];
	void build(int id, int l, int r) {
		if (l == r) {
			st[id] = a[l];
			return;
		}
		int mid = (l + r) / 2;
		build(id * 2, l, mid);
		build(id * 2 + 1, mid + 1, r);
		st[id] = st[id * 2] + st[id * 2 + 1];
	}
//	void update(int id, int l, int r, int i, int v) {
//	    if (i < l || r < i) {
//	        return ;
//	    }
//	    if (l == r) {
//	        st[id] = v;
//	        return ;
//	    }
//	
//	    int mid = (l + r) / 2;
//	    update(id * 2, l, mid, i, v);
//	    update(id * 2 + 1, mid + 1, r, i, v);
//	    st[id] = max(st[id * 2], st[id * 2 + 1]);
//	}
//	void update(int i, int v) {
//		update(1, 1, n, i, v);
//	}
//	int query(int id, int l, int r, int L, int R) {
// 		if (R < l || r < L) {
// 			return -INF;
//		}
//		if (L <= l && r <= R) {
//			return st[id];
//		} 
//		int mid = (l + r) / 2;
//		return max(query(id * 2, l, mid, L, R), query(id * 2 + 1, mid + 1, r, L, R));
//	}
//	int query(int L, int R) {
//		return query(1, 1, n, L, R);
//	}
	void down(int id, int l, int r) {
		if (l == r) {
			lazy[id] = 0;
			return;
		}
	    int t = lazy[id];
	    lazy[id * 2] += t;
	    st[id * 2] += t * ((l + r) / 2 - l + 1);
	    lazy[id * 2 + 1] += t;
	    st[id * 2 + 1] += t * (r - (l + r) / 2);
	    lazy[id] = 0;
	}
	void update(int id, int l, int r, int L, int R, int val) {
	    if (R < l || r < L) {
	        return ;
	    }
	    if (L <= l && r <= R) {
	        st[id] += val * (r - l + 1);
	        lazy[id] += val;
	        return;
	    }
	    int mid = (l + r) / 2;
	    down(id, l, r);
	    update(id * 2, l, mid, L, R, val);
	    update(id * 2 + 1, mid + 1, r, L, R, val);
	    st[id] = st[id * 2] + st[id * 2 + 1];
	}
	
	int query(int id, int l, int r, int L, int R) {
		if (R < l || r < L) {
			return 0;
		}
		if (L <= l && r <= R) {
			return st[id];
		}
		int mid = (l + r) / 2;
		down(id, l, r);
		return query(id * 2, l, mid, L, R) + query(id * 2 + 1, mid + 1, r, L, R);
	}
	int query2(int root, int l, int r, int lowerbound) {
		down(root, l, r);
	    if (st[root] - (r - l + 1) == 0) return -1;
	  	if (r < lowerbound) return -1;
	    if (l == r) return l;
	    int mid = (l + r) / 2;
	  	int res = -1; 
	    if (st[root * 2] - (mid - l + 1) < 0)
	        res = query2(root * 2, l, mid, lowerbound);
	  	if (res == -1)  
	      	res = query2(root * 2 + 1, mid + 1, r, lowerbound);
	    return res;
	}
	int query3(int root, int l, int r, int lowerbound) {
		down(root, l, r);
	    if (st[root] == 0) return -1;
	  	if (r < lowerbound) return -1;
	    if (l == r) return l;
	    int mid = (l + r) / 2;
	  	int res = -1; 
	    if (st[root * 2] > 0)
	        res = query3(root * 2, l, mid, lowerbound);
	  	if (res == -1)  
	      	res = query3(root * 2 + 1, mid + 1, r, lowerbound);
	    return res;
	}
	void add(int id) {
		int r = query2(1, 1, N, id);
//		int l = id;
//		int r = N;
//		while (l < r) {
//			int mid = (l + r) / 2;
//			
//			if (query(1, 1, N, id, mid) - (mid - id + 1) < 0) {
//				r = mid;
//			}
//			else {
//				l = mid + 1;
//			}
//		}
//		cout << id << " " << r << '\n';
		update(1, 1, N, id, r - 1, -1);
		update(1, 1, N, r, r, 1);
	}
	void minus(int id) {
		int r = query3(1, 1, N, id);
//		int l = id;
//		int r = N;
//		while (l < r) {
//			int mid = (l + r) / 2;
//			
//			if (query(1, 1, N, id, mid) == 0) {
//				l = mid + 1;
//			}
//			else {
//				r = mid;
//			}
//		}
//		cout << id << " " << r << '\n';
//		cout << id << " " << r << " " << query(1, 1, N, id, id) << " " << query(1, 1, N, id + 1, id + 1) << " " << query(1, 1, N, r, r) << '\n';
		update(1, 1, N, id, r - 1, 1);
		update(1, 1, N, r, r, -1);
	}
} St;
void run_case() {
	int q;
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
	long long cur = 0;
	St.build(1, 1, n);
	int t = (int)(lower_bound(a + 1, a + n + 1, cur) - a);
//	cout << t << '\n';
	cout << abs(St.query(1, 1, n, 1, t - 1)) + abs(St.query(1, 1, n, t, n)) << '\n';
	for (int i = 0; i < q; i++) {
		char c;
		int x;
		cin >> c >> x;
		if (c == 'D') {
			cur += x;
			St.update(1, 1, n, 1, n, -x);
		}
		else {
			cur -= x;
			St.update(1, 1, n, 1, n, x);
		}
		t = (int)(lower_bound(a + 1, a + n + 1, cur) - a);
//		cout << cur << " " << t << '\n';
//		for (int j = 1; j <= 4; j++) {
//			cout << St.query(1, 1, n, j, j) << " ";
//		}
//		cout << '\n';
		cout << abs(St.query(1, 1, n, 1, t - 1)) + abs(St.query(1, 1, n, t, n)) << '\n';
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
