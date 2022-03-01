#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long a, b, x;
	cin >> a >> b >> x;
	if (a > b) {
		swap(a, b);
	}
	if (x == a || x == b) {
		cout << "YES\n";
		return;
	}
	if (x > b) {
		cout << "NO\n";
		return;
	}
	
	while (a != 0) {
		if (x > b) {
			cout << "NO\n";
			return;
		}
		if (x % a == b % a) {
			cout << "YES\n";
			return;
		}
		long long t = b % a;
		b = a;
		a = t;
	}
	cout << "NO\n";
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

