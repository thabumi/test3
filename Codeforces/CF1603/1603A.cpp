#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
	if (a > b) {
		swap (a, b);
	}
	if (a == 0) {
		return b;
	}
	while (b % a != 0) {
		long long t = a;
		a = b % a;
		b = t;
	}
	return a;
}
long long lcm (long long a, long long b) {
	return (a / gcd (a, b)) * b;
}
void run_case(){
	long long n;
	cin >> n;
	long long a[n];
	long long Check = 1;
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (long long i = 0; i < n; i++) {
		if (Check > 1e9) {
			break;
		}
		Check = lcm(Check, i + 2);
		if (a[i] % Check == 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

