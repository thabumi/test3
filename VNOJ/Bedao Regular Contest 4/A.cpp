#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string n;
	cin >> n;
	n += '0';
	int sum = 0;
	for (auto t : n) {
		sum += t - '0';
	} 
	if (sum % 10 == 0) {
		cout << n;
	}
	else {
		int k = sum % 10;
		int plus = 10 - k;
		n.pop_back();
		n += ('0' + plus);
		cout << n;
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
