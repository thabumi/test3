#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 1e9 + 7;

void run_case() {
	int n;
	cin >> n;
	map<pair<char, int>, int> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d;
	cin >> d;
	vector<string> v(d);
	
	for (int i = 0; i < d; i++) {
		cin >> v[i];
		m[{v[i][0], (int)v[i].size()}]++;
	}
//	for (int i = 0; i < d; i++) {
//		cout << m[{v[i][0], (int)v[i].size()}] << " ";
//	}
//	cout << '\n';
	long long sum = 0;
	map<pair<char, int>, int> M = m;
	for (int i = 0; i < d; i++) {
		if ((int)v[i].size() == n) {
			long long res = 1;
			m[{v[i][0], n}]--;
			for (int j = 0; j < n; j++) {
				if (m[{v[i][j], a[j]}]) {
					res = res * m[{v[i][j], a[j]}] % MOD;
					m[{v[i][j], a[j]}]--;
				}
				else {
					res = 0;
					break;
				}
			}
			sum = (sum + res) % MOD;
			m = M;
//			bool b = false;
//			assert(b);
		}
		
	}
	cout << sum << '\n';
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
