#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	cout << a[1] << '\n';
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
