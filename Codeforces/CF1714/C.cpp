#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int s;
	cin >> s;
	string t = "";
//	for (int i = 1; i <= 45; i++) {
//		s = i;
//		int j = 9;
//		while (s > 0 && j >= 1) {
//			if (s > j) {
//				s -= j;
//				t = (char)(j + '0') + t;
//			}
//			j--;
//		}
//		cout << t << '\n';
//		t = "";
//	}
	int j = 9;
	while (s > 0 && j >= 1) {
		if (s >= j) {
			s -= j;
			t = (char)(j + '0') + t;
		}
		j--;
	}
	cout << t << '\n';
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
