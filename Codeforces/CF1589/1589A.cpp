#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long x, y;
	cin >> x >> y;
	cout << -x * x << " " << y * y << '\n';
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

