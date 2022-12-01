#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	bool b;
	if (s[0] == '(') {
		b = true;
	}
	else {
		b = false;
	}
	vector<int> v;
	v.push_back(0);
	int k = 1;
	while (k < n) {
		if (s[k] != s[k - 1]) {
			v.push_back(k);
		}
		k++;
	}
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		int y = (int)(upper_bound(v.begin(), v.end(), r) - v.begin());
		y--;
		
		int x = (int)(upper_bound(v.begin(), v.end(), l) - v.begin());;
		x--;
		if (b) {
			if (x % 2 == 0) {
				cout << (y - x + 1) / 2 << '\n';
			}
			else {
				cout << (y - x) / 2 << '\n';
			}
		}
		else {
			if (x % 2 == 0) {
				cout << (y - x) / 2 << '\n';
			}
			else {
				cout << (y - x + 1) / 2 << '\n';
			}
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
