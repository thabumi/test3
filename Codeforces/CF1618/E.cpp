#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long b[n + 5];
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		sum += b[i];
	}
	if (sum % (n * (n + 1) / 2) != 0) {
		cout << "NO\n";
		return;
	}
	if (n == 1) {
		cout << "YES\n";
		cout << b[1] << '\n';
		return;
	}
	sum /= (n * (n + 1)) / 2;
//	cout << "SUM:" << sum << '\n';
	vector<long long> res(n + 5);
	long long sum1 = 0;
	for (int i = 2; i <= n; i++) {
		if (b[i - 1] + sum - b[i] <= 0) {
			cout << "NO\n";
			return;
		}
		else if ((b[i - 1] + sum - b[i]) % n == 0) {
			res[i] = (b[i - 1] + sum - b[i]) / n;
			sum1 += res[i];
		}
		else {
			cout << "NO\n";
			return;
		}
	}
//	cout << "SUM1:" << sum1 << '\n';
	res[1] = sum - sum1;
	if (res[1] <= 0) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	for (int i = 1; i <= n; i++) {
		cout << res[i] << " ";
	}
	cout << '\n';
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


