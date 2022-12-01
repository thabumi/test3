#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	long long k;
	cin >> n >> k;
	long long a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[n + 1 - i];
	}
	vector<long long> b(2 * n + 5, 0);
	vector<long long> S(2 * n + 5, 0);
	vector<long long> T(2 * n + 5, 0);
	if (n == k) {
		long long bonus = 0;
		for (int i = n - k + 1; i <= n; i++) {
			bonus = max(bonus, (a[i] + n - i) / (n + 1 - i));
		}
		cout << bonus;
		return;
	}
	if (k == 1) {
		long long res = 0;
		for (int i = 1; i <= n; i++) {
			res += a[i];
		}
		cout << res;
		return;
	}
	if (k == 2) {
		long long res = 0;
		for (int i = 1; i <= n - 1; i++) {
			if (a[i] <= 0) {
				continue;
			}
			long long k = (a[i] + 1) / 2;
			res += k;
			a[i + 1] -= k;
		}
		if (a[n] >= 0) {
			res += a[n];
		}
		cout << res;
		return;
	}
	b[1] = (a[1] + k - 1) / k;
	a[1] -= b[1] * k;
	S[1] = b[1] * (k - 1);
	T[1] = b[1];
	long long res = b[1];
	for (int i = 2; i < n; i++) {
		a[i] = a[i] - S[i - 1];
		
		if (i <= n - k) {
			b[i] = max(0LL, (a[i] + k - 1) / k);
		}
		
		else {
			b[i] = 0;
		}
		a[i] = a[i] - b[i] * k;
		S[i] = S[i - 1] - T[i - 1] + (k - 1) * b[i];
		if (i - k + 1 >= 1) {
			S[i] -= b[i - k + 1];
		}
		T[i] = T[i - 1] + b[i];
		if (i - k + 2 >= 1) {
			T[i] -= b[i - k + 2];
		}
		res += b[i];
	}
//	cout << S[n - 2] << " " << S[n - 1] << '\n';
//	for (int i = n - k + 1; i <= n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
	long long bonus = 0;
	for (int i = n - k + 1; i <= n; i++) {
		bonus = max(bonus, (a[i] + n - i) / (n + 1 - i));
	}
//	cout << bonus << '\n';
	cout << res + bonus << '\n';
	return;
//	long long res = 0;
//	for (int i = n - 1; i >= 2; i--) {
//		if (a[i] <= 0) {
//			continue;
//		}
//		long long k = (a[i] + 2) / 3;
//		res += k;
//		a[i - 1] -= k * 2;
//		a[i - 2] -= k;
//		a[i] = 0;
//		cout << k << " ";
//	}
//	long long bonus = 0;
//	bonus = max(bonus, a[0]);
//	bonus = max(bonus, (a[1] + 1) / 2);
//	res += bonus;
//	cout << bonus << '\n';
//	cout << res << '\n';
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
