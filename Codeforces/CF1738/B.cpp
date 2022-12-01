#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	long long s[n + 1];
	for (int i = n - k + 1; i <= n; i++) {
        cin >> s[i];
	}
	long long a[n];
	for (int i = n - k + 2; i <= n - 1; i++) {
        if (s[i] - s[i - 1] > s[i + 1] - s[i]) {
            cout << "No\n";
            return;
        }

	}
	if (k == 1) {
        cout << "Yes\n";
        return;
	}
	else {
        a[n - k + 2] = s[n - k + 2] - s[n - k + 1];
        if (a[n - k + 2] * (n - k + 1) < s[n - k + 1]) {
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
	}
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
