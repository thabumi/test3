#include <bits/stdc++.h>
 
using namespace std;

vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
    	if (n % d == 0) {
    		factorization.push_back(d);
    		while (n % d == 0) {
	            n /= d;
	        }
		}
    }
    if (n > 1) {
    	factorization.push_back(n);
	}
        
    return factorization;
}

void run_case() {
	long long n, m;
	cin >> n >> m;
	vector<long long> v = trial_division1(m);
	if (v.size() == 0) {
		cout << 0 << '\n';
		return;
	}
	for (int i = v.size(); i >= 1; i--) {
		if (n % i == 0) {
			cout << i << '\n';
			return;
		}
	}
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
