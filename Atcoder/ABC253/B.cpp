#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int h, w;
    cin >> h >> w;
    int a[2][2];
    int cnt = 0;
    int xbeg, ybeg, xend, yend;
    char c[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> c[i][j];
            if (c[i][j] == 'o') {
                a[cnt][0] = i;
                a[cnt][1] = j;
                cnt++;
            }
        }
    }
    cout << abs(a[0][0] - a[1][0]) + abs(a[0][1] - a[1][1]);
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
