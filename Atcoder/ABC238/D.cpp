#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	unsigned long long a, s;
	cin >> a >> s;
	vector<int> an(64);
	vector<int> sum(64);
	vector<int> x(64, -1);
	vector<int> y(64, -1);
	string no = "No\n";
	string yes = "Yes\n";
	for (int i = 0; i < 64; i++) {
		if (a & (1LL << i)) {
			an[i] = 1;
			x[i] = 1;
			y[i] = 1;
		}
		else {
			an[i] = 0;
		}
	}
	
	for (int i = 63; i >= 1; i--) {
		an[i] = an[i - 1];
	}
	an[0] = 0;
	for (int i = 0; i < 64; i++) {
		if (s & (1LL << i)) {
			sum[i] = 1;
		}
		else {
			sum[i] = 0;
		}
	}
	int rem = 0;
	for (int i = 0; i < 64; i++) {
		if ((an[i] + rem) % 2 == sum[i]) {
			if (an[i] + rem == 2) {
				rem = 1;
			}
			else {
				rem = 0;
			}
			continue;
		}
		else if (an[i] + rem == 1 && sum[i] == 0) {
			if (x[i] != -1) {
				cout << no;
				return;
			}
			else {
				if (i < 63) {
					rem = 1;
				}
				else {
					cout << no;
					return;
				}
			}
		}
		else if (an[i] + rem == 0 && sum[i] == 1) {
			if (x[i] != -1) {
				cout << no;
				return;
			}
			else {
				rem = 0;
			}
		}
		else {
			if (x[i] != -1) {
				cout << no;
				return;
			}
			else {
				if (i < 63) {
					rem = 1;
				}
				else {
					cout << no;
					return;
				}
			}
		}
	}
	cout << yes;
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
