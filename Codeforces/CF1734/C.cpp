#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	long long res = 0;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	s = '.' + s;
	for (int i = 1; i <= n; i++) {
		if (s[i] == '0') {
			res += a[i];
			for (int j = i * 2; j <= n; j += i) {
				if (s[j] == '0') {
					a[j] = min(a[j], i);
				}
				else {
					break;
				}
//				a[j] = min(a[j], a[i]);
			}
		}
	}
	cout << res << '\n';
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
