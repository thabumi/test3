#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n + 1];
	vector<int> v;
	vector<int> cnt((int)2e5 + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		
		if (a[i] < i) {
			v.push_back(i);
			cnt[a[i]]++;
		}
	}
	long long sum[(int)2e5 + 1];
	sum[0] = cnt[0];
	for (int i = 1; i <= 2e5; i++) {
		sum[i] = sum[i - 1] + cnt[i];
	}
	long long res = 0;
	for (auto t : v) {
		res += sum[(int)2e5] - sum[t];
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
