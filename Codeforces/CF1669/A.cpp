#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int r;
	cin >> r;
	if (r >= 1900) {
		cout << "Division 1";
	}
	else if (r >= 1600) {
		cout << "Division 2";
	}
	else if (r >= 1400) {
		cout << "Division 3";
	}
	else  {
		cout << "Division 4";
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
