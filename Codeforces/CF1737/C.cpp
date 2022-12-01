#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	pair<int, int> p[3];
	pair<int, int> a[3];
//	int r1, c1, r2, c2, r3, c3;
//	cin >> r1 >> c1 >> r2 >> c2 >> r3 >> c3;
	for (int i = 0; i < 3; i++) {
		int x, y;
		cin >> x >> y;
		a[i] = {x, y};
		p[i] = {x % 2, y % 2};
	}
	set<pair<int, int>> s[4];
	s[0] = {{1, 1}, {1, 2}, {2, 1}};
	s[1] = {{1, n}, {2, n}, {1, n - 1}};
	s[2] = {{n, 1}, {n - 1, 1}, {n, 2}};
	s[3] = {{n, n}, {n - 1, n}, {n, n - 1}};
	set<pair<int, int>> S = {a[0], a[1], a[2]};
	sort(a, a + 3);
//	for (int i = 0; i < 3; i++) {
		if (S == s[0]) {
			int x, y;
			cin >> x >> y;
			if (x == 1 || y == 1) {
				cout << "YES\n";
				return;
			}
//			for (int j = 0; j < 3; j++) {
//				if (a[j].first == x && a[j].second == y) {
//					cout << "YES\n";
//					return;
//				}
//			}
//			if (make_pair(3, 1) == make_pair(x, y) || make_pair(1, 3) == make_pair(x, y)) {
//				cout << "YES\n";
//				return;
//			}
			cout << "NO\n";
			return;
		}
		if (S == s[1]) {
			int x, y;
			cin >> x >> y;
			if (x == 1 || y == n) {
				cout << "YES\n";
				return;
			}
//			for (int j = 0; j < 3; j++) {
//				if (a[j] == make_pair(x, y)) {
//					cout << "YES\n";
//					return;
//				}
//			}
//			if (make_pair(3, n) == make_pair(x, y) || make_pair(1, n - 2) == make_pair(x, y)) {
//				cout << "YES\n";
//				return;
//			}
			cout << "NO\n";
			return;
		}
		if (S == s[2]) {
			int x, y;
			cin >> x >> y;
			if (x == n || y == 1) {
				cout << "YES\n";
				return;
			}
//			for (int j = 0; j < 3; j++) {
//				if (a[j] == make_pair(x, y)) {
//					cout << "YES\n";
//					return;
//				}
//			}
//			if (make_pair(n - 2, 1) == make_pair(x, y) || make_pair(n, 3) == make_pair(x, y)) {
//				cout << "YES\n";
//				return;
//			}
			cout << "NO\n";
			return;
		}
		if (S == s[3]) {
			int x, y;
			cin >> x >> y;
			if (x == n || y == n) {
				cout << "YES\n";
				return;
			}
//			for (int j = 0; j < 3; j++) {
//				if (a[j] == make_pair(x, y)) {
//					cout << "YES\n";
//					return;
//				}
//			}
//			if (make_pair(n - 2, n) == make_pair(x, y) || make_pair(n, n - 2) == make_pair(x, y)) {
//				cout << "YES\n";
//				return;
//			}
			cout << "NO\n";
			return;
		}
//	}
	pair<int, int> t;
	int x, y;
	cin >> x >> y;
	t = {x % 2, y % 2};
	for (int i = 0; i < 3; i++) {
		if (t == p[i]) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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
