#include <bits/stdc++.h>
 
using namespace std;

const int INF = 1e9 + 10;
int a[100000 + 5];
int n;
struct SegTree {
	int st[400000 + 20];
//	int lazy[400000 + 20];
	void build() {
		memset(st, INF, sizeof(st));
	}
	void update(int id, int l, int r, int i, int v) {
	    if (i < l || r < i) {
	        return ;
	    }
	    if (l == r) {
	        st[id] = min(st[id], v);
	        return ;
	    }
	
	    int mid = (l + r) / 2;
	    update(id * 2, l, mid, i, v);
	    update(id * 2 + 1, mid + 1, r, i, v);
	    st[id] = min(st[id * 2], st[id * 2 + 1]);
	}
	void update(int i, int v) {
		update(1, 1, n, i, v);
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
		return query(1, 1, n, L, R);
	}
	void build2() {
		memset(st, -INF, sizeof(st));
	}
	void update2(int id, int l, int r, int i, int v) {
	    if (i < l || r < i) {
	        return ;
	    }
	    if (l == r) {
	        st[id] = max(st[id], v);
	        return ;
	    }
	
	    int mid = (l + r) / 2;
	    update2(id * 2, l, mid, i, v);
	    update2(id * 2 + 1, mid + 1, r, i, v);
	    st[id] = max(st[id * 2], st[id * 2 + 1]);
	}
	void update2(int i, int v) {
		update2(1, 1, n, i, v);
	}
	int query2(int id, int l, int r, int L, int R) {
 		if (R < l || r < L) {
 			return -INF;
		}
		if (L <= l && r <= R) {
			return st[id];
		} 
		int mid = (l + r) / 2;
		return max(query2(id * 2, l, mid, L, R), query2(id * 2 + 1, mid + 1, r, L, R));
	}
	int query2(int L, int R) {
		return query2(1, 1, n, L, R);
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
	
//	int n;
	cin >> n;
	long long b[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1, b + n + 1);
	int cnt = 0;
	map<int, int> mp;
	map<int, int> invmp;
	mp[b[1]] = cnt;
	invmp[cnt] = b[1];
	cnt++;
	for (int i = 2; i <= n; i++) {
		if (b[i] > b[i - 1]) {
			mp[b[i]] = cnt;
			invmp[cnt] = b[i];
			cnt++;
		}
	}
	for (int i = 1; i <= n; i++) {
		a[i] = mp[a[i]];
	}
	long long res = 0;
	St.build();
	for (int i = 2; i <= n; i++) {
		St.update(a[i - 1], i - 1);
		int tmp = St.query(a[i], cnt);
		res = max(res, 1LL * invmp[a[i]] * (i - tmp - 1));
	}
//	cout << res << '\n';
	St.build2();
	for (int i = n - 1; i >= 1; i--) {
		St.update2(a[i + 1], i + 1);
		int tmp = St.query2(a[i], cnt);
		res = max(res, 1LL * invmp[a[i]] * (tmp - i - 1));
//		if (res == 27) {
//			cout << invmp[a[i]] << '\n';
//		}
	}
	cout << res;
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
