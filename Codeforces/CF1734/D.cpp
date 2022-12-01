#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	pair<long long, long long> p[n + 1];
	p[k] = {0, 0};
	for (int i = k - 1; i >= 1; i--) {
		p[i] = {p[i + 1].first + a[i], min(p[i + 1].first + a[i], p[i + 1].second)};
	}
	for (int i = k + 1; i <= n; i++) {
		p[i] = {p[i - 1].first + a[i], min(p[i - 1].first + a[i], p[i - 1].second)};
	}
//	for (int i = 1; i <= n; i++) {
//		cout << p[i].first << " " << p[i].second << '\n';
//	}
//	return;
	int i = k;
	int j = k - 1;
	long long lian = 0;
	long long bonus = 0;
	long long cur = 0;
	while (i <= n) {
		if (lian + bonus + a[i] >= 0) {
			lian += a[i];
			cur = max(cur, lian);
//			cout << i << " " << cur << '\n';
			i++;
		}
		else {
			long long prev = bonus;
			while (j >= 1) {
				if (cur + bonus + p[j].second >= 0) {
					bonus = max(bonus, p[j].first);
//					cout << j << " " << bonus << '\n';
					j--;
				}
				else {
					break;
				}
			}
			if (prev == bonus) {
				break;
			}
		}
	}
	if (i == n + 1) {
		cout << "YES\n";
		return;
	}
	i = k;
	j = k + 1;
	lian = 0;
	bonus = 0;
	cur = 0;
	while (i >= 1) {
		if (lian + bonus + a[i] >= 0) {
			lian += a[i];
			cur = max(cur, lian);
			i--;
		}
		else {
			long long prev = bonus;
			while (j <= n) {
				if (cur + bonus + p[j].second >= 0) {
					bonus = max(bonus, p[j].first);
					j++;
				}
				else {
					break;
				}
			}
			if (prev == bonus) {
				break;
			}
		}
	}
	if (i == 0) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
	
//	cout << "YES\n";
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
