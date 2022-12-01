#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s[] = {"vie", "eng", "rus"};
	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	cout << s[(rng() % 3 + 3) % 3];
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
