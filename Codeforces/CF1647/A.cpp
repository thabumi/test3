#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s = "";
	if (n % 3 == 0) {
		for (int i = 0; i < n / 3; i++) {
			s = s + "2" + "1";
		}
	}
	else if (n % 3 == 1) {
		for (int i = 0; i < n / 3; i++) {
			s = s + "1" + "2";
		}	
		s += "1";
	}
	else {
		for (int i = 0; i < n / 3; i++) {
			s = s + "2" + "1";
		}
		s += "2";
	}
	cout << s << '\n';
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
