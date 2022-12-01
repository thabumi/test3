#include <bits/stdc++.h>
 
using namespace std;

int cycle(int a, int b, int n) {
	return ((a - b) % n + n) % n;
}

void run_case() {
	int n;
	cin >> n;
	int a[n + 5];
	int b[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]--;
		b[a[i]] = i;
	}
	int res[n];
	for (int i = n - 1; i >= 0; i--) {
		int j = (find(a, a + n, i) - a);
//		cout << j << ' ';
		if (j == i) {
			res[i] = 0;
		}
		else {
			res[i] = j + 1;
			rotate(a, a + j + 1, a + i + 1);
		}
	}
//	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << res[i] << " ";
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
