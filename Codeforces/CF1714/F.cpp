#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int d12, d23, d31;
	cin >> d12 >> d23 >> d31;
	if (d12 + d23 + d31 - max({d12, d23, d31}) < max({d12, d23, d31})) {
		cout << "NO\n";
		return;
	}
	if ((d12 + d23 + d31) % 2 != 0) {
		cout << "NO\n";
		return;
	}
	int x = (d12 - d23 + d31) / 2;
	int y = (d12 + d23 - d31) / 2;
	int z = (-d12 + d23 + d31) / 2;
	if (x + y + z + 1 > n) {
		cout << "NO\n";
		return;
	}
	cout << "YES";
	cout << '\n';
//	cout << x << " " << y << " " << z << '\n';
	int cur = 5;
	if (x != 0 && y != 0 && z != 0) {
		if (x == 1) {
			cout << 1 << " " << 4 << '\n';
		}
		else {
			cout << 1 << " " << cur << '\n';
			for (int i = cur; i <= cur + x - 3; i++) {
				cout << i << " " << i + 1 << '\n';
			}
			cout << cur + x - 2 << " " << 4 << '\n';
			cur = cur + x - 1;
		}
		if (y == 1) {
			cout << 2 << " " << 4 << '\n';
		}
		else {
			cout << 2 << " " << cur << '\n';
			for (int i = cur; i <= cur + y - 3; i++) {
				cout << i << " " << i + 1 << '\n';
			}
			cout << cur + y - 2 << " " << 4 << '\n';
			cur = cur + y - 1;
		}
		if (z == 1) {
			cout << 3 << " " << 4 << '\n';
		}
		else {
			cout << 3 << " " << cur << '\n';
			for (int i = cur; i <= cur + z - 3; i++) {
				cout << i << " " << i + 1 << '\n';
			}
			cout << cur + z - 2 << " " << 4 << '\n';
			cur = cur + z - 1;
		}
		while (cur <= n) {
			cout << 1 << " " << cur << '\n';
			cur++;
		}
//		cout << "dbg1\n";
	}

	else {
		if (x == 0) {
			cur = 2;
			int nxt = 4;
			int dis = 1;
			while (dis <= d23) {
				if (dis == d12) {
					cout << cur << " " << 1 << '\n';
					cur = 1;
					dis++;
					continue;
				}
				if (dis == d23) {
					cout << cur << " " << 3 << '\n';
					dis++;
					continue;
				}
				cout << cur << " " << nxt << '\n';
				cur = nxt;
				nxt++;
				dis++;
			}
			while (nxt <= n) {
				cout << 2 << " " << nxt << '\n';
				nxt++;
			}
//			cout << "dbg2\n";
		}
		else if (y == 0) {
			cur = 3;
			int nxt = 4;
			int dis = 1;
			while (dis <= d31) {
				if (dis == d23) {
					cout << cur << " " << 2 << '\n';
					cur = 2;
					dis++;
					continue;
				}
				if (dis == d31) {
					cout << cur << " " << 1 << '\n';
					dis++;
					continue;
				}
				cout << cur << " " << nxt << '\n';
				cur = nxt;
				nxt++;
				dis++;
			}
			while (nxt <= n) {
				cout << 3 << " " << nxt << '\n';
				nxt++;
			}
//			cout << "dbg3\n";
		}
		else {
			cur = 1;
			int nxt = 4;
			int dis = 1;
			while (dis <= d12) {
				if (dis == d31) {
					cout << cur << " " << 3 << '\n';
					cur = 3;
					dis++;
					continue;
				}
				if (dis == d12) {
					cout << cur << " " << 2 << '\n';
					dis++;
					continue;
				}
				cout << cur << " " << nxt << '\n';
				cur = nxt;
				nxt++;
				dis++;
			}
			while (nxt <= n) {
				cout << 1 << " " << nxt << '\n';
				nxt++;
			}
//			cout << "dbg4\n";
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
