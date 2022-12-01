#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	long long a[n];
	for (int i = 0; i < n; i++) {
        cin >> a[i];
	}
	long long t[n];
	for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1] * 2) {
            t[i] = 1;
        }
        else {
            t[i] = 0;
        }
	}
	int cur = 0;
	for (int i = 0; i < k; i++) {
        cur += t[i];
	}
	int res = 0;
	if (cur == k) {
        res++;
	}
	for (int i = 0; i + k < n - 1; i++) {
        cur = cur - t[i] + t[i + k];
        if (cur == k) {
            res++;
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
