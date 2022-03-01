#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int b[7];
	for (int i = 0; i < 7; i++) {
		cin >> b[i];
	}
	cout << b[0] << " " <<b[1] << " " <<  b[6] - b[0] - b[1] << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


