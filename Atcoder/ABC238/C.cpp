#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 998244353;

pair<int, long long> Pow10(long long a) {
	if (a < 10) {
		return {1, 1};
	}
	long long t = 1;
	int dig = 1;
	while (t * 10 <= a && t != 1e17) {
		t *= 10;
		dig++;
	}
	return {dig, t};
}

long long Pow(long long a) {
	long long res = 1;
	for (int i = 0; i < a; i++) {
		res *= 10;
	}
	return res;
}

long long binPow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = binPow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	long long n;
	cin >> n;
	long long inv2 = binPow(2, MOD - 2);
	vector<long long> v(19);
	for (int i = 1; i <= 18; i++) {
		long long k = Pow(i) - Pow(i - 1);
//		cout << k << ' ';
		v[i] = k % MOD * ((k + 1) % MOD) % MOD * inv2 % MOD;
	}
	for (int i = 1; i <= 18; i++) {
//		cout << v[i] << " ";
	}
	pair<int, long long> t = Pow10(n);
	long long res = 0;
	for (int i = 1; i < t.first; i++) {
		res = (res + v[i]) % MOD;
	}
//	cout << t.first << " " << t.second << '\n';
//	cout << res << '\n';
	res = (res + (n - t.second + 1) % MOD * ((n - t.second + 2) % MOD) % MOD * inv2 % MOD) % MOD;
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
