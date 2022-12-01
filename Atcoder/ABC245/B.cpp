#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	map<int, int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		m[x] = 1;
	}
	int i = 0;
	if (m[0] == 0) {
		cout << 0;
		return;
	}
	while (m[i] == 1) {
		i++;
	}
	cout << i;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
