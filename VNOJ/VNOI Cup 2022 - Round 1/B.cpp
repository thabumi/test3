#include <bits/stdc++.h>
 
using namespace std;
//vector<bool> prime;
//vector<long long> primes;
//vector<pair<long long, long long>> trial_division4(long long n) {
//    vector<pair<long long, long long>> factorization;
//    for (long long d : primes) {
//        if (d * d > n)
//            break;
//        if (n / d == 0) {
//        	factorization.push_back(d, 0);
//        	while (n % d == 0) {
//	            factorization.back().second++;
//	            n /= d;
//	        }
//		}
//        
//    }
//    if (n > 1)
//        factorization.push_back(n, 1);
//    return factorization;
//}
//vector<long long> factor(long long n) {
//	
//	vector<long long> res;
//	vector<pair<long long, long long>> v = trial_division4(n);
//	if (v.size() == 0) {
//		res.push_back(1);
//		return res;
//	}
//	int s = v.size();
//	for (int i = 0; i < (1 << s); i++) {
//		long long t = 1;
//		for (int j = 0; j < s; j++) {
//			if (i & (1 << j)) {
//				t *= v[j];
//			}
//		}
//		res.push_back(t);
//	}
//	return res;
//}
void run_case() {
//	prime.assign((int)1e6+1, true);
//	prime[0] = prime[1] = false;
//	for (int i = 2; i <= 1e6; i++) {
//	    if (prime[i] && (long long)i * i <= 1e6) {
//	        for (int j = i * i; j <= 1e6; j += i)
//	            prime[j] = false;
//	    }
//	}
//	for (int i = 1; i <= 1e6; i++) {
//		if (prime[i]) {
//			primes.push_back(i);
//		}
//	}
//	vector<long long> cnt((int)2e6 + 1, 0);
	int n;
	cin >> n;
	
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
//		vector<long long> v = factor(a[i]);
//		for (auto t : v) {
//			cout << t << " ";
//			cnt[t]++;
//		}
//		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		int res = 0;
		for (int j = 0; j < n; j++) {
			if (j == i) {
				continue;
			}
			for (int k = j + 1; k < n; k++) {
				if (k == i) {
					continue;
				}
				if ((a[j] % (a[i] * 2) == 0 && (a[k] % (a[i] * 2) == 0))) {
					res++;
				}
			}
		}
		cout << res << " ";
	}
	
//	return;
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " " << cnt[a[i] * 2] << " ";
//		cout << cnt[a[i] * 2] * (cnt[a[i] * 2] - 1) / 2 << '\n';
//	}
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
