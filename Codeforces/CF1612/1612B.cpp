#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n, a, b;
	cin >> n >> a >> b;
	if (b < n / 2 || (b == n / 2 && a < b)) {
		cout << -1 << '\n';
		return;
	}
	if (a > n / 2 + 1 || (a == n / 2 + 1 && a < b)) {
		cout << -1 << '\n';
		return;
	}
	for (int i = n; i >= 1; i--) {
		if (i == a) {
			cout << max(a, b) << " ";
		}
		else if (i == b) {
			cout << min(a, b) << " ";
		}
		else {
			cout << i << " ";
		}
	}
	cout << '\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}

