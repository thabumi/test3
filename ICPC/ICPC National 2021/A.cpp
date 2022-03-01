#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int c[n * n];
	vector<int> cnt(n + 5, 0);
	for (int i = 0; i < n * n; i++) {
		cin >> c[i];
		cnt[c[i]]++;
	}
	set<pair<int, int>> s;
	for (int i = 1; i <= n + 1; i++) {
		if (cnt[i]) {
			s.insert({cnt[i], i});
		}
	}
	vector<pair<int, int>> color[n + 5];
	for (int i = 1; i <= n; i++) {
		if (s.size() >= 2) {
			pair<int, int> p = *s.begin();
			pair<int, int> q = *s.rbegin();
			if (p.first + q.first < n) {
				cout << "NO";
				return;
			}	
			else {
				if (p.first >= n) {
					color[p.second].push_back({n, i});
					pair<int, int> t = {p.first - n, p.second};
					s.erase(s.begin());
					if (t.first > 0) {
						s.insert(t);
					} 
				}
				else {
					color[p.second].push_back({p.first, i});
					color[q.second].push_back({n - p.first, i});
					pair<int, int> t = {q.first - n + p.first, q.second};
					auto it = s.end();
					it--;
					s.erase(it);
					s.erase(s.begin());
					if (t.first > 0) {
						s.insert(t);
					}	
					
				}
				
			}
		}
		else {
			pair<int, int> p = *s.begin();
			if (p.first >= n) {
				color[p.second].push_back({n, i});
				pair<int, int> t = {p.first - n, p.second};
				s.erase(s.begin());
				if (t.first) {
					s.insert(t);
				}
			}
			else {
				cout << "NO";
				return;
			}
		}
	}
	cout << "YES\n";
	for (int i = 0; i < n * n; i++) {
		if (!color[c[i]].empty()) {
			cout << color[c[i]].back().second << " ";
			color[c[i]].back().first--;
			if (color[c[i]].back().first == 0) {
				color[c[i]].pop_back();
			}
		}
		
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;
}