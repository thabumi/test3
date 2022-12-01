#include <bits/stdc++.h>

using namespace std;

void run_case() {
	char c[8][8];
	for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> c[i][j];
        }
	}
	for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (c[i][j] == '#' && c[i + 1][j + 1] == '#' && c[i + 1][j - 1] == '#' && c[i - 1][j + 1] == '#' && c[i - 1][j - 1] == '#') {
                cout << i + 1 << " " << j + 1 << '\n';
                return;
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
