#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	long long b[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	long long l = 0;
	long long r = (long long)1e9;
	while (l < r) {
		long long mid = (l + r) / 2;
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = i - 1; j >= 0; j--) {
				if (j >= 1 )
			}
			for (int j = i + 1; j < n; j++) {
				
			}
			for (int j = 0; j < n; j++)
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
