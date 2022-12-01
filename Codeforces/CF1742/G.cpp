#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    int res = 0;
    for (int i = 30; i >= 0; i--) {
        if (res & (1 << i)) {
            continue;
        }
        int mx = -1;
        int mxin = -1;
        for (int j = cnt; j < n; j++) {
            if (a[j] & (1 << i)) {
                if (mx < (res | a[j])) {
                    mx = (res | a[j]);
                    mxin = j;
                }
            }
        }
        if (mxin != -1) {
            res = mx;
            assert(cnt < n);
            swap(a[cnt++], a[mxin]);
        }
//        cout << res << " ";
    }
//    cout << '\n';
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
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
