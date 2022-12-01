#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	string s;
	cin >> s;

	for (int i = 0; i < n; i++) {
        cin >> a[i];
	}

	int res = 0;
	int k = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            v.push_back(i);
        }
        else {
            res += a[i];
        }
	}
	v.push_back(n);
	for (int i = 0; i < v.size() - 1; i++) {
        int mn = a[v[i]];
        for (int j = v[i] + 1; j < v[i + 1]; j++) {
            mn = min(mn, a[j]);
        }
        res += a[v[i]] - mn;
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
