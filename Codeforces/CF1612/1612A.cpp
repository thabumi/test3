#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int x, y;
	cin >> x >> y;
	if ((x + y) % 2 == 1) {
		cout << -1 << " " << -1 << '\n';
		return;
	}
	else {
		if (x % 2 == 0) {
			cout << x / 2 << " " << y / 2 << '\n';
		}
		else {
			cout << x / 2 << " " << y / 2 + 1 << '\n';
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

