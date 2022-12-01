#include <bits/stdc++.h>
 
using namespace std;

long long f(string s) {
	long long res = 0;
	long long Pow = 1;
	for (int i = s.size() - 1; i >= 0; i--) {
		res += Pow * (s[i] - '0');
		Pow *= 2;
	}
	return res;
}

void run_case() {
	long long k;
	cin >> k;
	string s;
	cin >> s;
	int n = s.size();
	int l = 0, r = n - 1;
	while (l < r) {
		int mid = (l + r) / 2;
		string t = "";
		int cnt = 0;
		t += s[0];
		for (int i = 1; i < n; i++) {
			if (s[i] == '1' && cnt < mid) {
				cnt++;
			}
			else {
				t += s[i];
			}
		}
		while (cnt < mid) {
			t.pop_back();
			cnt++;
		}
//		cout << mid << " " << t << '\n';
		if (f(t) <= k) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	cout << r;
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
