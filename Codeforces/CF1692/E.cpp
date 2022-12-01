#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, s;
	cin >> n >> s;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
	}
	if (s > sum) {
        cout << -1 << '\n';
        return;
	}
	if (s == sum) {
        cout << 0 << '\n';
        return;
	}
	if (s + 1 == sum) {
        int res = 1e9;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt++;
            if (a[i] == 1) {
                res = min(res, cnt);
                break;
            }

        }
        cnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            cnt++;
            if (a[i] == 1) {
                res = min(res, cnt);
                break;
            }
        }
        cout << res << '\n';
        return;
	}
	int res = 1e9;
	int cnt = 0;
    vector<int> v;
    v.push_back(-1);
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            v.push_back(i);
        }
    }
    v.push_back(n);
    for (int i = 0; i + s + 1 < v.size(); i++) {
        res = min(res, v[i] + 1 + n - v[i + s + 1]);
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
