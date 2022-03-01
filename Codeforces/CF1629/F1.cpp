#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

long long binPow(long long a, long long b) {
	if (b == 1) {
		return a % MOD;
	}
	long long t = binPow(a, b / 2);
	t = t * t % MOD;
	if (b % 2 == 1) {
		t = t * a % MOD;
	}
	return t;
}

struct Fraction {
	public:
	long long x;
	long long y;
	Fraction() {
		x = 0;
		y = 1;
	}
	Fraction(long long x0, long long y0) {
		x = x0 % MOD;
		y = y0 % MOD;
	}
};

Fraction Add(Fraction a, Fraction b) {
	return Fraction((a.x * b.y + a.y * b.x) % MOD, a.y * b.y % MOD);
}
Fraction Format(Fraction a) {
	long long d = __gcd(a.x, a.y);
	return Fraction(a.x / d, a.y / d);
}
Fraction Mul(Fraction a, Fraction b) {
	return Fraction(a.x * b.x % MOD, a.y * b.y % MOD);
}

void run_case() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<Fraction>> dp(n + 1, vector<Fraction>(m + 1, Fraction()));
	dp[0][0] = Fraction(0, 1);
	for (int i = 1; i <= min(m, n); i++) {
		dp[i][0] = Fraction(0, 1);
		dp[i][i] = Fraction(k % MOD * i, 1);
	}
//	return;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j >= i) {
				break;
			}
			dp[i][j] = Add(dp[i - 1][j - 1], dp[i - 1][j]);
//			return;
			dp[i][j].x = dp[i][j].x * binPow(2, MOD - 2) % MOD;
//			return;
		}
	}
	long long p = dp[n][m].x, q = dp[n][m].y;
	long long t = binPow(q, MOD - 2);
	cout << p * t % MOD << '\n';
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
