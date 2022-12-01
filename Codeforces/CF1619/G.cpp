#include <bits/stdc++.h>

using namespace std;

struct Bomb {
	long long x;
	long long y;
	long long time;
};

vector<Bomb> a;

bool check1(int i, int j) {
	return a[i].y < a[j].y;
}

bool check2(int i, int j) {
	return a[i].x < a[j].x;
}

struct DSU {
    vector<int> lab;
    DSU(int n) : lab(n + 1, -1) {}
	
    int getRoot(int u) {
    
    	
        if (lab[u] < 0) return u;
        
        int t = getRoot(lab[u]);
        a[u].time = a[t].time = min(a[t].time, a[u].time);
        return lab[u] = t;
    }

    bool merge(int u, int v) {
        u = getRoot(u); v = getRoot(v);
        a[u].time = a[v].time = min(a[u].time, a[v].time);
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


void run_case() {
	int n;
	long long k;
	cin >> n >> k;
	a.clear();
	a.resize(n);
	DSU dsu(n);
	map<long long, vector<int>> mapx;
	map<long long, vector<int>> mapy;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y >> a[i].time;
		mapx[a[i].x].push_back(i);
		mapy[a[i].y].push_back(i);
	}
	for (auto t = mapx.begin(); t != mapx.end(); t++) {
		sort(t->second.begin(), t->second.end(), check1);
	}
	for (auto t = mapy.begin(); t != mapy.end(); t++) {
		sort(t->second.begin(), t->second.end(), check2);
	}
	for (auto t : mapx) {
		for (int i = 0; i < t.second.size() - 1; i++) {
			if (abs(a[t.second[i]].y - a[t.second[i + 1]].y) <= k) {
				dsu.merge(t.second[i], t.second[i + 1]);
			}
		}
	}
	for (auto t : mapy) {
		for (int i = 0; i < t.second.size() - 1; i++) {
			if (abs(a[t.second[i]].x - a[t.second[i + 1]].x) <= k) {
				dsu.merge(t.second[i], t.second[i + 1]);
			}
		}
	}
	set<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int t = dsu.getRoot(i);
		s.insert({a[t].time, t});
	}	
	vector<int> v;
	for (auto t : s) {
		v.push_back(t.first);
	}
	sort(v.begin(), v.end());
	int l = 0;
	int r = v.size();
	int K = v.size();
	while (l < r) {
		long long mid = (l + r) / 2;
		if (K - mid - 2 < 0 || v[K - mid - 2] <= mid) {
			r = mid;
		}	
		else {
			l = mid + 1;
		}
	}
	cout << r << '\n';
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
