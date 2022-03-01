#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	string res = "";
	bool C = false;
	int cnt = 0;
	int Cnt = 0;
	int cnt2 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'C') {
			cnt += cnt2 / 2;
			cnt2 = cnt2 % 2;	
			for (int i = 0; i < cnt; i++) {
				res += 'A';
			}
			for (int i = 0; i < cnt2; i++) {
				res += 'B';
			}
			cnt = 0;
			cnt2 = 0;
			res += 'C';
		}
		else if (s[i] == 'A') {
			cnt++;
		}
		else {
			cnt2++;
		}
	}
	cnt += cnt2 / 2;
	cnt2 = cnt2 % 2;	
	for (int i = 0; i < cnt; i++) {
		res += 'A';
	}
	for (int i = 0; i < cnt2; i++) {
		res += 'B';
	}
	cnt = 0;
	cnt2 = 0;
	cout << res;
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
