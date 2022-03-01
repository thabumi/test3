#include <bits/stdc++.h>
 
using namespace std;

int f(char c) {
	return c - '0';
}
void run_case() {
	string s;
	cin >> s;
	int n = s.size();
	vector<int> sum(n);
	sum[0] = f(s[0]);
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + f(s[i]);
	}
	vector<int> res(n);
	res[n - 1] = sum[n - 1] % 10;
	for (int i = n - 2; i >= 0; i--) {
		sum[i] += sum[i + 1] / 10;
		if (i > 0) {
			res[i] = sum[i] % 10;
		}
		else {
			res[i] = sum[i];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << res[i];
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
