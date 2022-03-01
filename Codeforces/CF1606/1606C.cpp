#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long n;
	cin >> n;
	long long k;
	cin >> k;
	long long a[n];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		if (a[0] > 0) {
			cout << 1 << '\n';
			return;
		}
		else {
			cout << k + 1 << '\n';
			return;
		}
	}
	long long res = 0;
	int i = 1;
	while (k > 0 && i < n) {
		long long s = min((long long)pow(10, a[i] - a[i - 1]) - 1, k);
		res += s * (long long)pow(10, a[i - 1]);
		k -= s;
		if (s == (long long)pow(10, a[i] - a[i - 1]) - 1) {
			i++;
		}
	}
	if (k > 0) {
		res += (k + 1) * (long long)pow(10, a[n - 1]);
	}
	else {
		res += (long long)pow(10, a[i - 1]);
	}
	cout << res << '\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

