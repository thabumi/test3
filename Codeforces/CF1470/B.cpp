#include <bits/stdc++.h>
 
using namespace std;

vector<int> smallestFactor;
vector<int> primes;
#define int long long
void era(int n) {
	smallestFactor.assign(n + 1, 1);
	vector<bool> prime(n + 1, true);
	prime[0] = prime[1] = false;
	primes = {};
	vector<int> res;
	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			smallestFactor[i] = i;
			for (long long j = (long long)i * i; j <= n; j += i) {
				prime[j] = false;
				smallestFactor[j] = i;
			}
		}
	}
//	for (int i = 2; i <= n; i++) {
//		if (prime[i]) {
//			primes.push_back(i);
//		}
//	}
//	return res;
}
int b[(int)1e6 + 5];
int cnt[(int)1e6 + 5];
void run_case() {
//	vector<int> prime = era((int)1e3);
//	int m = primes.size();
//	for (int i = 0; i < 10; i++) {
//		cout << prime[i] << " ";
//	}
//	return;
	int n;
	cin >> n;
	int a[n];
	
//	memset(cnt, 0, sizeof(cnt));
//	vector<int> b(n, 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] = b[a[i]];
		cnt[a[i]]++;
//		while (a[i] > 1) {
//			int p = smallestFactor[a[i]];
//			int cnt = 0;
//			while (a[i] % p == 0) {
//				a[i] /= p;
//				cnt++;
//			}
//			if (cnt % 2 != 0) {
//				b[i] *= p; 
//			}
//		}
//		for (int j = 0; j < m; j++) {
////			if (a[i] < primes[j]) {
////				break;
////			}
//			int Cnt = 0;
////			int k = a[i];
//			while (a[i] % primes[j] == 0) {
//				a[i] /= primes[j];
//				Cnt ^= 1;
//			}
//			if (Cnt == 1) {
//				a[i] *= primes[j];
//			}
//			
//		}
//		if (a[i] > (int)1e6) {
//			cout << -1;
//			return;
//		}
//		cout << a[i] << " ";
	}
//	cout << '\n';
	
	
//	for (int i = 0; i < n; i++) {
////		if (b[i] <= 1e6) {
//			cnt[a[i]]++;
////		}
//		
//	}
	
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; i++) {
//		if (cnt[x] == 0) {
//			continue;
//		}
		x = max(x, cnt[a[i]]);
		y += cnt[a[i]] * (a[i] == 1 || cnt[a[i]] % 2 == 0);
		cnt[a[i]] = 0;
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		long long w;
		cin >> w;
		if (w == 0) {
			cout << x << '\n';
		}
		else {
//			printf("%d\n", max(x, y));
			cout << max(x, y) << '\n';
		}
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	int k = 1e6 + 5;
	era(k);
	b[1] = 1;
//	for (int i = 1; i <= 10; i++) {
//		cout << smallestFactor[i] << " ";
//	}
//	return 0;
	for (int i = 0; i <= 1e6; i++) {
		int p = smallestFactor[i];
		int x = i / p;
		if (b[x] % p == 0) {
			b[i] = b[x] / p;
		}
		else {
			b[i] = b[x] * p;
		}
	}
//	for (int i = 1; i <= 10; i++) {
//		cout << b[i] << " ";
//	}
//	return 0;
//	prime = era((int)1e6 + 5);
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
