#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c || b + c == a || c + a == b) {
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
