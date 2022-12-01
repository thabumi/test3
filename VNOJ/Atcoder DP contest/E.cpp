#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	long long w;
	cin >> n >> w;
	long long wei[n];
	int val[n];
	for (int i = 0; i < n; i++) {
		cin >> wei[i] >> val[i];
	}
	vector<long long> v((int)1e5 + 1, (long long)1e18);
	v[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1e5; j >= 0; j--) {
			if (j - val[i] >= 0) {
				v[j] = min(v[j], v[j - val[i]] + wei[i]);
			}
		}
	}
//	cout << v[30];
	for (int i = 1e5; i >= 0; i--) {
		if (v[i] <= w) {
			cout << i;
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
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
