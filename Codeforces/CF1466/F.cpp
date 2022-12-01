#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

struct DSU {
    vector<int> lab;
	vector<bool> ind;
    DSU(int n) : lab(n + 1, -1), ind(n + 1, 0) {}

    int getRoot(int u) {
        if (lab[u] < 0) return u;
        int t = getRoot(lab[u]);
//        if (t > 0) {
    	if (ind[u] || ind[t]) {
    		ind[u] = ind[t] = 1;
		}
//		}
        
        return lab[u] = t;
    }

    bool merge(int u, int v) {
    	int U = u;
    	int V = v;
        u = getRoot(u); v = getRoot(v);
        if (u == v || (ind[u] && ind[v])) return false;
        if (lab[u] > lab[v]) swap(u, v);
        lab[u] += lab[v];
        lab[v] = u;
        if (ind[u] || ind[v]) {
        	ind[u] = ind[v] = 1;
		}
		if (ind[u]) {
			ind[U] = 1;
		}
		if (ind[v]) {
			ind[V] = 1;
		}
        return true;
    }

    bool same_component(int u, int v) {
        return getRoot(u) == getRoot(v);
    }

    int component_size(int u) {
        return -lab[getRoot(u)];
    }
};

long long Pow2(long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = Pow2(b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * 2 % MOD;
	}
	return t;
}
void run_case() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n + 5);
	vector<int> res;

	DSU dsu(m + 5);
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v[i].resize(k);
		for (int j = 0; j < k; j++) {
			cin >> v[i][j];
		}
		if (k == 1) {
			if (!dsu.ind[dsu.getRoot(v[i][0])]) {
				dsu.ind[v[i][0]] = 1;
				dsu.getRoot(v[i][0]);
				res.push_back(i + 1);
			}
		}
		else {
			if (dsu.merge(v[i][0], v[i][1])) {
				res.push_back(i + 1);
			}
		}
	}

	cout << Pow2((long long)res.size()) << " " << res.size() << '\n';
	for (auto t : res) {
		cout << t << " ";
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
