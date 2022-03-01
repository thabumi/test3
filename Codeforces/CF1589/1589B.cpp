#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long n, m;
	cin >> n >> m;
	long long res = 0;
	if (n % 3 == 0 || m % 3 == 0) {
		cout << m * n / 3 << '\n';
		return;
	}
	if (n % 3 == 2 && m % 3 == 2) {
		cout << n * m / 3 + 1 << '\n';
		return;
	}
	cout << n * m / 3 + 1 << '\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}

