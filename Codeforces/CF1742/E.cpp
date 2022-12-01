#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, q;
	cin >> n >> q;
	long long a[n + 1];
	long long needed[n + 1];
	a[0] = 0;
	needed[0] = 0;
	for (int i = 1; i <= n; i++) {
        cin >> a[i];
        needed[i] = max(needed[i - 1], a[i]);
	}
	long long pref[n + 1];
	pref[0] = 0;
	for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + a[i];
	}
	for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;
        int t = (int)(upper_bound(needed, needed + n + 1, x) - needed) - 1;
        cout << pref[t] << ' ';
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
