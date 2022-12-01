#include <bits/stdc++.h>

using namespace std;
vector<int> subset;
void search(int k) {
	
}
void run_case() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long dp[1 << n];
	for (int i = 0; i < (1 << n); i++) {
		vector<long long> v;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				v.push_back(a[i]);
			}
		}
		int k = v.size();
		for (int j = 0; j < (1 << k); j++) {
			
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
