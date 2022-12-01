#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
	}
	long long res = 1e9;
	for (int i = 1; i <= n; i++) {
        long long k = 0;
        long long thick = i;
        for (int j = 0; j < i; j++) {
            k += a[j];
        }
        long long cur = 0;
        long long cnt = 0;
        bool ok = true;
        for (int j = i; j < n; j++) {
            cur += a[j];
            cnt++;
            if (cur > k) {
                ok = false;
                break;
            }
            else if (cur == k) {
                thick = max(thick, cnt);
                cnt = 0;
                cur = 0;
            }
        }
        if (cur > 0 && cur != k) {
            continue;
        }
        if (ok) {
            res = min(res, thick);
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
