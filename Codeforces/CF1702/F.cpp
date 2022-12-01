#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long b[n];
	map<long long, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		while (a[i] % 2 == 0) {
			a[i] /= 2;
		}
		m[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		while (b[i] != 0) {
			if (!m[b[i]]) {
				b[i] /= 2;
			}
			else {
				m[b[i]]--;
				break;
			}
		}
		if (b[i] == 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
