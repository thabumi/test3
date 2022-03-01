#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	map<pair<int, int>, int> used;
	stack<pair<int, int>> s;
	s.push(make_pair(1, n));
	while (!s.empty()) {
		pair<int, int> p = s.top();
//		cout << p.first << " " << p.second << '\n';
		s.pop();
		if (p.first == p.second) {
			used[p] = p.first;
			continue;
		}
		pair<int, int> p1 = {1e9, p.second};
		pair<int, int> p2 = {p.first, 0};
		for (int i = 0; i < n; i++) {
			
			if (v[i].second == p.second && v[i].first > p.first) {
				p1.first = min(p1.first, v[i].first);
			} 
			if (v[i].first == p.first && v[i].second < p.second) {
				p2.second = max(p2.second, v[i].second);
			}
		}
//		cout << p1.first << " " << p1.second << " " << p2.first << " " << p2.second << '\n';
		if (p1.first != 1e9) {
			s.push(p1);
		}
		if (p2.second != 0) {
			s.push(p2);
		}
		if (p1.first != 1e9) {
			used[p] = p1.first - 1;
		}
		else {
			used[p] = p2.second + 1; 
		}
		
	}
//	return;
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << " " << used[v[i]] << '\n';
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
