#include <bits/stdc++.h>
 
using namespace std;
/*
MaxSegTree
Complexity: O(nlogn) for building the tree, O(logn) for each query
*/ 
const int INF = 1e9 + 10;
const int N = 2e5 + 40;
int n;
int cnt[N + 45];
struct SegTree {
	int st[N * 4];
	int lazy[N * 4];
	void build(int id, int l, int r) {
		if (l == r) {
			st[id] = cnt[l];
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
	int a[n];
	for (int i = 0; i < n; i++) {
		
		cin >> a[i];
		cnt[a[i]]++;
//		St.add(a[i]);
//		for (int i = 1; i <= 15; i++) {
//			cout << St.query(1, 1, N, i, i) << " ";
//		}
//		cout << '\n';
	}
	for (int i = 0; i < N + 44; i++) {
		cnt[i + 1] += cnt[i] / 2;
		cnt[i] = cnt[i] % 2;	
	}
	St.build(1, 1, N);
//	int l = 1;
//	int r = N;
//	while (l < r) {
//		int mid = (l + r + 1) / 2;
//		if (St.query(1, 1, N, mid, N) == 0) {
//			r = mid - 1;
//		}
//		else {
//			l = mid;
//		}
//	}
//	cout << l << '\n';
//	for (int i = 1; i <= 15; i++) {
//		cout << St.query(1, 1, N, i, i) << " ";
//	}
//	cout << '\n';
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		
		St.minus(a[x]);
//		for (int i = 1; i <= 15; i++) {
//			cout << St.query(1, 1, N, i, i) << " ";
//		}
//		cout << '\n';
		St.add(y);
//		for (int i = 1; i <= 15; i++) {
//			cout << St.query(1, 1, N, i, i) << " ";
//		}
//		cout << '\n';
		a[x] = y;
		
		int l = 1;
		int r = N;
		while (l < r) {
			int mid = (l + r + 1) / 2;
			if (St.query(1, 1, N, mid, N) == 0) {
				r = mid - 1;
			}
			else {
				l = mid;
			}
		}
		cout << l << '\n';
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
