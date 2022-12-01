#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
	}
	if (s.size() == n) {
        cout << "YES\n";
	}
	else {
        cout << "NO\n";
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
