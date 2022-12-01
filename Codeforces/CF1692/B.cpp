#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int cnt = 0;
	vector<bool> v(10000, 0);
	for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (v[a[i]]) {
            cnt++;
        }
        else {
            v[a[i]] = 1;
        }
	}
	cout << n - (cnt + 1) / 2 * 2 << '\n';

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
