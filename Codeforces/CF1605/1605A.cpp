#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int a, b, c;
	cin >> a >> b >> c;
	if ((b * 2 - a - c) % 3 == 0) {
		cout << 0 << '\n';
	}
	else {
		cout << 1 << '\n';
	}
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

