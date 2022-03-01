#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long s[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	long long dif[n + 5];
	for (int i = 1; i < n; i++) {
		dif[i] = s[i + 1] - s[i];
	}
	long long min1 = 0;
	long long t = 0;
	for (int i = 1; i < n; i += 3) {
		t += dif[i];
		min1 = min(t, min1);
	}
	long long min2 = 0;
	t = 0;
	for (int i = 2; i < n; i += 3) {
		t += dif[i];
		min2 = min(t, min2);
	}
	long long min3 = 0;
	t = 0;
	for (int i = 3; i < n; i += 3) {
		t += dif[i];
		min3 = min(t, min3);
	}
	long long a1 = -min1, a2 = -min2, a3 = -min3;
	if (a1 + a2 + a3 > s[1]) {
		cout << "No";
		return;
	}
	else {
		vector<long long> res(n + 5);
		res[1] = a1;
		res[2] = a2;
		res[3] = s[1] - a1 - a2;
		for (int i = 4; i <= n + 2; i++) {
			res[i] = res[i - 3] + s[i - 2] - s[i - 3];
		}
		cout << "Yes\n";
		for (int i = 1; i <= n + 2; i++) {
			cout << res[i] << " ";
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
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
