#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, c, q;
	cin >> n >> c >> q;
	string s;
	cin >> s;
	vector<long long> len;
	len.push_back(n);
	vector<long long> bt;
	bt.push_back(0);
	for (int i = 0; i < c; i++) {
		long long l, r;
		cin >> l >> r;
		long long N = len.back();
		len.push_back(N + (r - l + 1));
		bt.push_back(N + 1 - l);
	}
	for (int i = 0; i < q; i++) {
		long long x;
		cin >> x;
		
		while (x > n) {
			int t = (int)(lower_bound(len.begin(), len.end(), x) - len.begin());
//			cout << t << " ";
			x -= bt[t];
		}
		if (x == 0) {
			continue;
		}
		cout << s[x - 1] << '\n';
//		cout << x << '\n';

	} 
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
