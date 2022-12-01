#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

long long Pow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = Pow(a, b / 2);
	t = t * t % MOD;
	if (b & 1) {
		t = t * a % MOD;
	}
	return t;
}

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		if (s[i] == s[0]) {
			cnt++;
		}
		else {
			break;
		}
	}
	cout << Pow(2, cnt) << '\n';
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
