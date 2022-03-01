#include <bits/stdc++.h>
 
using namespace std;
long long MOD = 1e9 + 7;
long long binpow(long long a, long long b) {
	if (b == 0) {
		return 1LL;
	}
	long long t = binpow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

long long A(int n, int k) {
	long long res = 1;
	for (int i = n - k + 1; i <= n; i++) {
		res = res * i % MOD;
	}
	return res;
}

long long Der(int n) {
	if (n == 0) {
		return 1;
	}
	int one;
	if (n % 2 == 0) {
		one = 1;
	}
	else {
		one = -1;
	}
	return (n * Der(n - 1) + one) % MOD;
}

void run_case() {
	int n;
	cin >> n;
	int a[n + 5];
	map<int, int> sat;
	int count0 = 0;
	int count1 = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] != 0) {
			sat[a[i]]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) {
			if (sat[i]) {
				count1++;
			}
			else {
				count0++;
			}
		}
	}
	if (count0 + count1 == 0) {
		cout << 0 << '\n';
		return;
	}
//	cout << count1 << " " << count0 << '\n';
	long long res = Der(count0) * A(count0 + count1, count1) % MOD;
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
