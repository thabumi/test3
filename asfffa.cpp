#include <bits/stdc++.h>

using namespace std;

double dis(vector<double> a, vector<double> b) {
	double sum1 = 0;
	double sum2 = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		sum1 += a[i];
		sum2 += b[i];
	}
	sum1 /= n;
	sum2 /= n;
//	double sum = (sum1 + sum2) / 2;
	for (int i = 0; i < n; i++) {
		if (a[i] < sum1) {
			a[i] = 0;
		}
		if (a[i] < sum1) {
			a[i] = 0;
		}
		else {
			a[i] -= sum1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (b[i] < sum2) {
			b[i] = 0;
		}
		if (b[i] < sum2) {
			b[i] = 0;
		}
		else {
			b[i] -= sum2;
		}
	}
	double res = 0;
	for (int i = 0; i < n; i++) {
		res += abs(a[i] - b[i]);
	}
	return res;
}

void run_case() {
	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	int cnt = 0;
	for (int i = 0; i < 10000; i++) {
		int t = rng() % 5 + 1;
		vector<double> a(t);
		vector<double> b(t);
		vector<double> c(t);
		for (int i = 0; i < t; i++) {
			a[i] = (rng() % 100) * 0.01;
			b[i] = (rng() % 100) * 0.01;
			c[i] = (rng() % 100) * 0.01;
			
		}
		
		double x[3] = {dis(a, b), dis(b, c), dis(c, a)};
		for (int i = 0; i < t; i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
		for (int i = 0; i < t; i++) {
			cout << b[i] << " ";
		}
		cout << '\n';
		for (int i = 0; i < t; i++) {
			cout << c[i] << " ";
		}
		
		cout << '\n';
		cout << x[0] << " " << x[1] << " " << x[2] << " ";
		sort(x, x + 3);
		if (x[0] + x[1] + 1e-9 < x[2]) {
			cout << "NO\n\n";
			cnt++;
		}
		else {
			cout << "YES\n\n";
		}
		
	}
	cout << cnt;
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
