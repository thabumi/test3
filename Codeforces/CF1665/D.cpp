#include <bits/stdc++.h>
 
using namespace std;
int ans;
void q(long long a, long long b) {
	cout << "? " << a << " " << b << endl;
	cin >> ans;
}
void an(long long x) {
	cout << "! " << x << endl;
}

void run_case() {
	int n = 30;
	long long incre = 1;
	long long pw = 2;
	for (int i = 0; i < n; i++) {
		q(incre, incre + pw);
		if (ans == pw) {
			
		}
		else {
			incre += pw / 2;
		}
		pw *= 2;
	}
	pw /= 2;
	long long Res = ((pw - incre) % pw + pw) % pw;
	an(Res);
}

int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
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
