#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int a, b, c;
	cin >>  a >> b >> c;
	if (a <= 2 || b <= 2 || c <= 2) {
		cout << a * b * c;
		return;
	}
	
	cout << a * b * c - (a - 2) * (b - 2) * (c - 2);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
