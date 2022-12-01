#include <bits/stdc++.h>

using namespace std;

// DisjointSet {{{
struct DSU {
    vector<int> lab;

    DSU(int n) : lab(n+1, -1) {}

    int getRoot(int u) {
        if (lab[u] < 0) return u;
        return lab[u] = getRoot(lab[u]);
    }

    bool merge(int u, int v) {
        u = getRoot(u); v = getRoot(v);
        if (u == v) return false;
        if (lab[u] > lab[v]) swap(u, v);
        lab[u] += lab[v];
        lab[v] = u;
        return true;
    }

    bool same_component(int u, int v) {
        return getRoot(u) == getRoot(v);
    }

    int component_size(int u) {
        return -lab[getRoot(u)];
    }
};
// }}}

void run_case() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        char c;
        cin >> c;
        if (c == 'A') {

        }
        else if (c == '?') {

        }
        else if (c == 'C') {

        }
        else {

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
