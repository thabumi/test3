#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((b - a) * (b - c) <= 0) {
        cout << "Yes";
	}
	else {
        cout << "No";
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
