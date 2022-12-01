#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n + 1];
	vector<int> in(1001, -1e9);
	for (int i = 1; i <= n; i++) {
        cin >> a[i];
        in[a[i]] = i;
	}
	int res = -1;
	for (int i = 1; i <= 1000; i++) {
        if (in[i] > 0) {
            for (int j = i; j <= 1000; j++) {
                if (in[j] > 0 && __gcd(i, j) == 1) {
                    res = max(res, in[i] + in[j]);
                }
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
