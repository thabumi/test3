#include <bits/stdc++.h>
 
using namespace std;

bool check(vector<long long> v, long long k) {
	bool flexible = false;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= 3) {
			flexible = true;
			break;
		}
	}
	long long sum = 0;
	for (auto t : v) {
		sum += t;
	}
	if (flexible) {
		if (sum >= k) {
			return true;
		}
		return false;
	}
	else {
		if (sum < k || k % 2 != 0) {
			return false;
		} 
		return true;
	}
}

void run_case() {
	long long n, m, k;
	cin >> n >> m >> k;
	long long a[k];
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	vector<long long> v1;
	vector<long long> v2;
	long long cnt1 = 0;
	long long cnt2 = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] / n >= 2) {
			v1.push_back(a[i] / n);
			cnt1 += a[i] / n;
		}
		if (a[i] / m >= 2) {
			v2.push_back(a[i] / m);
			cnt2 += a[i] / m;
		}
	}

	if (check(v1, m) || check(v2, n)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
