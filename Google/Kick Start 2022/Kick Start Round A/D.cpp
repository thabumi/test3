#include <bits/stdc++.h>
 
using namespace std;

bool check(long long a) {
	string s = to_string(a);
	long long p = 1;
	long long sum = 0;
	for (auto t : s) {
		p *= (t - '0');
		sum += (t - '0');
	}
	return (p % sum == 0);
}

void run_case() {
	long long a, b;
	cin >> a >> b;
	int cnt = 0;
	for (long long i = a; i <= b; i++) {
		if (check(i)) {
			cnt++;
		}
	}
	cout << cnt << '\n';
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
