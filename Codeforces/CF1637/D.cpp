#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long b[n];
	long long res = 0;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		res += a[i] * a[i] * (n - 2);
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		sum += b[i];
		res += b[i] * b[i] * (n - 2);
	}
//	cout << res << '\n';
	long long dif[n];
	long long sumdif = 0;
	for (int i = 0; i < n; i++) {
		dif[i] = abs(a[i] - b[i]);
		sumdif += dif[i];
	}
//	for (int i = 0; i < n; i++) {
//		cout << dif[i] << " ";
//	}
//	cout << '\n';
	vector<bool> pos(10005, false);
	pos[0] = true;
	for (int i = 0; i < n; i++) {
		for (int x = 10000; x >= 0; x--) {
			if (pos[x]) {
				pos[x + dif[i]] = true;
			}
		}
	}
//	for (int i = 0; i <= 20; i++) {
//		cout << i  << ":" << pos[i] << " ";
//	}
//	return;
//	cout << sumdif << '\n';
	long long Ex = 1e9;
	for (int i = max(0LL, sumdif / 2 - 150); i <= sumdif / 2 + 150; i++) {
		if (pos[i]) {
			long long k = sumdif - i;
			long long sub = abs(i - k);
			long long Sa = (sum + sub) / 2;
			long long Sb = (sum - sub) / 2;

			Ex = min(Sa * Sa + Sb * Sb, Ex);
		}
	}
	cout << res + Ex << '\n';
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
