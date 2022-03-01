#include <bits/stdc++.h>
 
using namespace std;

long long Sum(int a, int b) {
	return 1LL * b * (b + 1) / 2 - 1LL * a * (a - 1) / 2;
}

void run_case() {
	int n;
	cin >> n;
	vector<long long> k(n + 1);
	vector<long long> h(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> k[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	vector<long long> Min(n + 1);
	Min[n] = h[n];
	long long KMin = k[n];
	for (int i = n - 1; i >= 1; i--) {
		if (h[i] - k[i] > Min[i + 1] - k[i + 1]) {
			Min[i] = h[i];
		}
		else {
			Min[i] = Min[i + 1] - k[i + 1] + k[i];
		}
	}
//	for (int i = 1; i <= n; i++) {
//		cout << Min[i] << " ";
//	}
//	cout << '\n';
	long long res = Min[1] * (Min[1] + 1) / 2;
	long long Pow = Min[1];
	for (int i = 2; i <= n; i++) {
		if (k[i] - k[i - 1] >= Min[i]) {
			res += Min[i] * (Min[i] + 1) / 2;
			Pow = Min[i];
		}
		else {
			res += Sum(Pow + 1, Pow + k[i] - k[i - 1]);
			Pow += k[i] - k[i - 1];
		}
	}
	cout << res << '\n';;
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
