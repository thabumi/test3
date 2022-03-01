#include <bits/stdc++.h>
 
using namespace std;

long long ans;
void q(long long k) {
	cout << "+ " << k << endl;
	cin >> ans;
}

void a(long long x) {
	cout << "! " << x << endl;
}

void run_case() {
	long long n;
	cin >> n;
	long long preAns = 0;
	long long preq = 0;
	long long m = n / 2;
	long long lastq = m;
	long long l = 1, r = n - 1;
	bool rem = false;
	bool b = true;
//	cout << l << " " << r << endl;
	while (b) {
		
		long long mid = (l + r + 1) / 2;
		q(n - mid);
		
//		cout << l << " " << r << endl;
		if (r - l <= 1) {
			if (ans > preAns) {
				a(ans * n);
			}
			else {
				a(ans * n + n - 1);
			}
			b = false;
			return;
		}
//		if (n - mid == 1 && r - l == 1) {
//			if (ans > preAns) {
//				a(ans * n);
//			}
//			else {
//				a(ans * n + n - 1);
//			}
//			b = false;
//			return;
//		}
		if (ans > preAns) {
			l = 0;
			r = r - mid;
		}
		else {
			l = n - mid + l;
			r = n - 1;
		}
		preAns = ans;
//		m = m / 2;
	}
//	a(ans * n);
}
int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
