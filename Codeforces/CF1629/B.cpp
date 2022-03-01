#include <bits/stdc++.h>
 
using namespace std;

int f(int a) {
	return (a + 1) / 2;
}

void run_case() {
	int l, r, k;
	cin >> l >> r >> k;
	if (l == r) {
		if (l == 1) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
		return;
	}
	int t = f(r) - f(l - 1);
	if (k >= t) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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
