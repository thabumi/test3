#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > c) {
		cout << "Aoki";
	}
	else if (a < c) {
		cout << "Takahashi";
	}
	else {
		if (b > d) {
			cout << "Aoki";
		}
		else {
			cout << "Takahashi";
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
