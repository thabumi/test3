#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	map<int, int> cnt;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int Cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt[a[i]]++;
		if (cnt[a[i]] == 1) {
			Cnt++;
		}
	}
	int res = Cnt;
	for (int i = k; i < n; i++) {
		cnt[a[i]]++;
		if (cnt[a[i]] == 1) {
			Cnt++;
		}
		cnt[a[i - k]]--;
		if (cnt[a[i - k]] == 0) {
			Cnt--;
		}
		res = max(res, Cnt);
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
