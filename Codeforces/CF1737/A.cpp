#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> a(26, 0);
	for (auto t : s) {
		a[t - 'a']++;
	}
	string res = "";
	for (int i = 0; i < k; i++) {
		char cur = 'a';
		for (int i = 0; i < n / k; i++) {
			if (a[i]) {
				a[i]--;
				cur++;
			}
			else {
				break;
			}
		}
		res += cur;
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
