#include <bits/stdc++.h>

using namespace std;

void run_case() {
	char c[8][8];
	for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> c[i][j];
        }
	}
	for (int i = 0; i < 8; i++) {
        bool ok = true;
        for (int j = 0; j < 8; j++) {
            if (c[i][j] != 'R') {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "R\n";
            return;
        }
	}
	cout << "B\n";
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
