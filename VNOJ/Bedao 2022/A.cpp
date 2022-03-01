#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long n, x, y;
	cin >> n >> x >> y;
	if (x > y) {
		swap(x, y);
	}
	cout << n * x / (x + y) << " " << n * y / (x + y) << '\n';
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
