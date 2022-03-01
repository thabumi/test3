#include <bits/stdc++.h>
 
using namespace std;

#define int long long

void run_case() {
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long res = 0;
	vector<int> v(2 * n + 5);
	int i = 0;
	int init = 0;
	map<int, int> m;
	int cycle = 0;
	while (i < 2 * n + 5) {
		if (m[init]) {
			cycle = i - m[init];
			break;
		}
		m[init] = i;
		res += a[init];
		v[i] = init;
		init = (init + a[init]) % n;
		i++;
		k--;
		if (k == 0) {
			cout << res;
			return;
		}
	}
	long long sumcyc = 0;
	long long rem = k % cycle;
	long long odd = 0;
	int s = m[init];
	for (int j = s; j < s + cycle; j++) {
		sumcyc += a[v[j]];
		rem--;
		if (rem == 0) {
			odd = sumcyc;
		}
	}
//	cout << sumcyc << " " << odd << '\n';
	res = res + sumcyc * (k / cycle) + odd;
	cout << res;
}

signed main() {
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
