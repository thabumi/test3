#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long x, y;
	cin >> x >> y;
	if (y % x == 0) {
		cout << x << '\n';
		return;
	}
	if (y > x) {
		cout << (y / x) * x + (y % x) / 2 << '\n';
		return;
	}
	cout << y + x * (y / x + 5) << '\n';
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

