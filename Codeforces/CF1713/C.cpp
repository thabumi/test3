#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	n--;
	int N = n;
	vector<int> res(n + 1);
	while (n >= 0) {
		int k = sqrt(n);
		if (k * k == n) {
			for (int i = 0; i <= n; i++) {
				res[i] = n - i;
			}
			n = -1;
		}
		else {
			int m = (k + 1) * (k + 1);
			for (int i = m - n; i <= n; i++) {
				res[i] = m - i; 
			}
			n = m - n - 1;
		}
	}
	for (int i = 0; i <= N; i++) {
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
