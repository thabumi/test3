#include <bits/stdc++.h>

using namespace std;
/*
MaxSegTree
Complexity: O(nlogn) for building the tree, O(logn) for each query
*/ 
#define int long long
const long long INF = 1e18 + 10;
const int N = 2e5 + 5;
long long a[N];
int n;
struct SegTree {
	long long st[N * 4];
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
	long long query(int id, int l, int r, int L, int R) {
 		if (R < l || r < L) {
 			return -INF;
		}
		if (L <= l && r <= R) {
			return st[id];
		} 
		int mid = (l + r) / 2;
		return max(query(id * 2, l, mid, L, R), query(id * 2 + 1, mid + 1, r, L, R));
	}
	long long query(int L, int R) {
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
	memset(St.st, 0LL, sizeof(St.st));
//	int n;
	cin >> n;
	int h[n];
//	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long dp[n];
	dp[0] = a[0];

	St.update(h[0], dp[0]);
	for (int i = 1; i < n; i++) {
//		cout << St.query(0, h[i]) << " ";
//		cout << a[i] + St.query(0, h[i]) << " ";
		dp[i] = a[i] + St.query(1, h[i]);
//		dp[i] = max(a[i] + St.query(1, h[i]), a[i]);
		St.update(h[i], dp[i]);

	}
//	cout << '\n';
	long long res = -1;
	for (int i = 0; i < n; i++) {
		res = max(res, dp[i]);
//		cout << dp[i] << " ";
	}
//	cout << '\n';
	cout << res;
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
