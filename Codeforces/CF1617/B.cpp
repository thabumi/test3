#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << n / 2 << " " << n / 2 - 1 << " " << 1 << '\n';
	}
	else {
		
		n--;
		if (n % 4 == 0) {
			cout << n / 2 - 1 << " " << n / 2 + 1 << ' ';
		}
		else {
			cout << n / 2 - 2 << " " << n / 2 + 2 << ' ';
		}
		cout << 1 << "\n";
	}
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
