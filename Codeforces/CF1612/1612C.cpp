#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long k, x;
	cin >> k >> x;
	x *= 2;
	long long t = sqrt(x);
	if (k * (k - 1) >= x) {
		if (t * (t + 1) >= x) {
			cout << t << '\n';
		}
		else {
			cout << t + 1 << '\n';
		}
	}
	else {
		x -= k * (k - 1);
		if (k * (k + 1) >= x) {
			long long l = k * (k + 1) - x;
			long long i = sqrt(l);
			if (i * (i + 1) <= l) {
				cout << k - 1 + k - i << '\n';
			}
			else {
				cout << k - 1 + k - i + 1 << '\n';
			}
		}
		else {
			cout << 2 * k - 1 << '\n';
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}

