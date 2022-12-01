#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n == 3) {
        cout << -1 << '\n';
        return;
	}
	if (n % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                cout << i - 1 << ' ';
            }
            else {
                cout << i + 1 << ' ';
            }
        }
	}
	else {
        for (int i = 4; i <= n; i++) {
            if (i % 2 == 0) {
                cout << i + 1 << ' ';
            }
            else {
                cout << i - 1 << ' ';
            }
        }
        cout << 1 << " " << 2 << " " << 3;
	}
	cout << '\n';
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
