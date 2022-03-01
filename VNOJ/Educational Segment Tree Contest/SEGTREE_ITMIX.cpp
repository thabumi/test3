#include <bits/stdc++.h>
 
using namespace std;

const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;
long long a[maxn];

struct Segtree {
	long long lazy[4 * maxn];
	long long st[4 * maxn];
	void build(int id, int l, int r) {
		if (l == r) {
			st[id] = a[l];
			return;
		}
		int mid = (l + r) / 2;
		build(id << 1, l, mid);
		build(id << 1 | 1, mid + 1, r);
		st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
	}
	void pushdown(int id) {
		int t = lazy[id];
		lazy[id << 1] = (lazy[id << 1] + t) % MOD;
		st[id << 1] = (st[id << 1] + t) % MOD;
		lazy[id << 1 | 1] = (lazy[id << 1 | 1] + t) % MOD;
		st[id << 1 | 1] = (st[id << 1 | 1] + t) % MOD;
		lazy[id] = 0;
	}
	void update1(int id, int l, int r, int L, int R, int k) {
		if (R < l || r < L) {
			return;
		}
		if (L <= l && r <= R) {
			st[id] = (st[id] + 1LL * k * (r - l + 1) % MOD) % MOD;
			lazy[id] = (lazy[id] + 1LL * k * (r - l + 1) % MOD) % MOD;
		}
		int mid = (l + r) / 2;
		pushdown(id);
		update1(id << 1, l, mid, u, v, k);
    	update1(id << 1 | 1, mid + 1, r, u, v, k);

		st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
	}
	void update2(int id, int l, int r, int L, int R, int k) {
		if (R < l || r < L) {
			return;
		}
		if (L <= l && r <= R) {
			lazy[id] = (lazy[id] + st[id] * (k - 1) % MOD) % MOD;
			st[id] = st[id] * k % MOD;
		}
		int mid = (l + r) / 2;
		pushdown(id);
		update1(id << 1, l, mid, u, v, k);
    	update1(id << 1 | 1, mid + 1, r, u, v, k);

		st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
	}
	void update1(int id, int l, int r, int L, int R, int k) {
		if (R < l || r < L) {
			return;
		}
		if (L <= l && r <= R) {
			lazy[id] = lazy[id] + 
			st[id] = 1LL * k * (l - r + 1) % MOD;
		}
		int mid = (l + r) / 2;
		pushdown(id);
		update1(id << 1, l, mid, u, v, k);
    	update1(id << 1 | 1, mid + 1, r, u, v, k);

		st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
	}
};

void run_case() {
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
