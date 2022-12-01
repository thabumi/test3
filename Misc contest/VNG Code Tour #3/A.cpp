#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> cnt(m + 1, 0);
	int a[n];
	long long res = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		while (cnt[i] > 1) {
			int t = cnt[i] / k;
//			res += t;
			if (cnt[i] % k == 0) {
				res += t;
				cnt[i] = t;
			}
			else if (cnt[i] % k == 1) {
				res += t;
				cnt[i] = t + 1;
			}
			else {
				res += t + 1;
				cnt[i] = t + 1;
			}
			
		}
	}
	cout << res;
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
