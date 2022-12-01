#include <bits/stdc++.h>

using namespace std;

void run_case() {
	long long k;
	cin >> k;
	long long res = 0;
	set<long long> s;
	
	// a^2 + b^2 = k ----> -a^2, -b^2
	for (long long i = 1; i <= sqrt(k); i++) {
		long long j = k - i * i;
		if (j > 0) {
			long long t = sqrt(j);
			if (t * t == j) {
				s.insert(-i * i);
				s.insert(-t * t);
			}
		}
	}
	
	// k = a^2 - b^2 --> k = (a-b)(a+b) a!=b va (a+b) % 2 == 0
	for (long long i = 1; i <= sqrt(k); i++) {
		if (k % i == 0) {
			long long j = k / i;
			if (i != j && (i + j) % 2 == 0) {
				s.insert((j - i) * (j - i) / 4);
				s.insert( - (j + i) * (j + i) / 4);
			}
		}
	} 
	if (s.size() == 0) {
		cout << 0;
		return;
	}
	cout << s.size() << '\n';
	auto it = s.begin();
	while (it != s.end()) {
		cout << *it;
		it++;
		if (it != s.end()) {
			cout << ' ';
		}
	}
//	cout << res;
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
