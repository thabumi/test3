#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
        cin >> a[i];
	}
	long long res = 0;
	for (int i = 1; i <= n / 2; i *= 2) {
        for (int j = 1; j <= n; j += i * 2) {

            if (a[j] > a[j + i]) {
                res++;
                swap(a[j], a[j + i]);
            }
            if (a[j] % (i * 2) != 1) {
                cout << -1 << '\n';
                return;
            }
        }
	}
	cout << res << '\n';
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
