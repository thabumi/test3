#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	vector<int> res(n + 1, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> last(n + 1, -1);
	vector<int> cur(n + 1, 0);
	for (int i = 0; i < n; i++) {
		if (last[a[i]] == -1) {
			cur[a[i]] = 1;
			last[a[i]] = i;
		}
		else if ((i - last[a[i]]) % 2 != 0) {
			cur[a[i]]++;
			last[a[i]] = i;
		}
		res[a[i]] = max(cur[a[i]], res[a[i]]);
	}
	for (int i = 1; i <= n; i++) {
		res[i] = max(res[i], cur[i]);
	}
	for (int i = 1; i <= n; i++) {
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
