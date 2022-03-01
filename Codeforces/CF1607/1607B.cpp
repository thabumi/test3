#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long x;
	long long n;
	cin >> x >> n;
	if (x & 1) {
		if (n % 4 == 0) {
			cout << x << '\n';
		}
		else if (n % 4 == 1) {
			cout << x + n << '\n';
		}
		else if (n % 4 == 2) {
			cout << x - 1 << '\n';
		}
		else {
			cout << x - 1 - n << '\n';
		}
	}
	else {
		if (n % 4 == 0) {
			cout << x << '\n';
		}
		else if (n % 4 == 1) {
			cout << x - n << '\n';
		}
		else if (n % 4 == 2) {
			cout << x + 1 << '\n';
		}
		else {
			cout << x + 1 + n << '\n';
		}
	}
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

