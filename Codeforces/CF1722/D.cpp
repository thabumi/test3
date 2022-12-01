#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	long long res = 0;
	long long swit[n];
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			res += i;
			swit[i] = n - 1 - 2 * i;
		}
		else {
			res += n - 1 - i;
			swit[i] = i - (n - 1 - i);
		}
	}
	sort(swit, swit + n, greater<long long>());
	for (int i = 0; i < n; i++) {
		if (swit[i] <= 0) {
			cout << res << ' ';
			continue;
		}
		else {
			res += swit[i];
			cout << res << ' ';
			continue;
		}
		
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
