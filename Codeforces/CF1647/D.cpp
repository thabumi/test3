#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long x, d;
	cin >> x >> d;
	long long t = x;
	int cnt = 0;
	while (t % d == 0) {
		t /= d;
		cnt++;
	}
	if (cnt < 2) {
		cout << "NO\n";
		return;
	}
	bool prime = true;
	bool exprime = false;
	int cntexprime = 0;
	int rootd;
	for (int i = 2; i <= sqrt(d); i++) {
		if (d % i == 0) {
			prime = false;
			rootd = i;
			while (d % i == 0) {
				d /= i;
				cntexprime++;
			}
			if (d == 1) {
				exprime = true;
			}
			break;
		}
	}
	if (prime) {
		bool Prime = true;
		for (int i = 2; i <= sqrt(t); i++) {
			if (t % i == 0) {
				Prime = false;
				break;
			}
		}
		if (!Prime) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else if (exprime) {
		bool Prime = true;
		for (int i = 2; i <= sqrt(t); i++) {
			if (t % i == 0) {
				Prime = false;
				break;
			}
		}
		if (!Prime) {
			cout << "YES\n";
		}
		else {
			if (t == rootd) {
				int target = cnt * cntexprime + 1;
				if ((cntexprime * 2 - 1) * (cnt - 1) < target) {
					cout << "NO\n";
				}
				else {
					cout << "YES\n";
				}
			}
			else if (cnt >= 3) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}
	else {
		bool Prime = true;
		for (int i = 2; i <= sqrt(t); i++) {
			if (t % i == 0) {
				Prime = false;
				break;
			}
		}
		if (!Prime) {
			cout << "YES\n";
		}
		else {
			if (cnt >= 3) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
