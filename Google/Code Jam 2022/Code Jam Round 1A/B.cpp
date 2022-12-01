#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long b[n];
	a[0] = 1;
	for (int i = 1; i < 30; i++) {
		a[i] = a[i - 1] * 2;
	}
	for (int i = 30; i < n; i++) {
		a[i] = (int)1e9 - (n - 1 - i);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i] + b[i];
	}
	sum /= 2;
	sort(b, b + n);
	long long t = (1LL << 30);
	int i = n - 1;
	vector<long long> res;
	while (sum >= t && i >= 30) {
		sum -= a[i];
		res.push_back(a[i]);
		i--;
	}
	int j = n - 1;
	while (sum >= t && j >= 0) {
		sum -= b[j];
		res.push_back(b[j]);
		j--;
	}
	for (int k = 0; k < 30; k++) {
		if (sum & (1LL << k)) {
			res.push_back(a[k]);
		}
	}
	for (auto t : res) {
		cout << t << " ";
	}
	cout << endl;
}

int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
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
