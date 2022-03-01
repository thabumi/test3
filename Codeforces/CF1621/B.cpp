#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	int n;
	cin >> n;
	vector<pair<long long, long long>> p(n);
	long long c[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second >> c[i];
	}
	long long Min = p[0].first;
	long long Max = p[0].second;
	long long bestl = 0;
	long long bestr = 0;
	int just1 = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << c[0] << '\n';
			continue;
		}
		if (p[i].first < Min) {
			Min = p[i].first;
			bestl = i;
			if (p[i].second > Max) {
				just1 = i;
				Max = p[i].second;
				bestr = i;
			}
			else if (p[i].second == Max) {
				just1 = i;
				if (c[bestr] > c[i]) {
					bestr = i;
				}
			}
			else {
				just1 = -1;
			}
		}
		else if (p[i].first == Min) {
			if (c[bestl] > c[i]) {
				bestl = i;
			}
			if (p[i].second > Max) {
				just1 = i;
				Max = p[i].second;
				bestr = i;
			}
			else if (p[i].second == Max) {
				if (just1 == -1 || c[just1] > c[i]) {
					just1 = i;
				}
				if (c[bestr] > c[i]) {
					bestr = i;
				}
			}
		}
		else {
			if (p[i].second > Max) {
				just1 = -1;
				Max = p[i].second;
				bestr = i;
			}
			else if (p[i].second == Max) {
				if (c[bestr] > c[i]) {
					bestr = i;
				}
			}
		}
		long long res = c[bestr] + c[bestl];
		if (just1 != -1) {
			res = min(res, c[just1]);
		}
		cout << res << '\n';
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
