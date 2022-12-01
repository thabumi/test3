#include <bits/stdc++.h>
 
using namespace std;

//D1
void run_case() {
	int l, r;
	cin >> l >> r;
	
	int a[r + 1]; 
	for (int i = l; i <= r; i++) {
		cin >> a[i];
	}
	vector<int> v(17, 0);
	for (int i = 0; i < 17; i++) {
		int cnt = 0;
		for (int j = l; j <= r; j++) {
			if (a[j] & (1 << i)) {
				cnt++;
			}
			else {
				cnt--;
			}
		}
		if (cnt > 0) {
			v[i] = 1;
		}
	}
	int res = 0;
	for (int i = 0; i < 17; i++) {
		if (v[i]) {
			res += (1 << i);	
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
