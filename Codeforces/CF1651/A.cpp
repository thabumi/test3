#include <bits/stdc++.h>
 
using namespace std;

//int Pow(int a, int b) {
//	
//}

void run_case() {
	int n;
	cin >> n;
	long long res = 1;
	for (int i = 0; i < n; i++) {
		res *= 2;
	}
	cout << res - 1 << '\n';
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
