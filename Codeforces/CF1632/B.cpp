#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int k = 1;
	while (k * 2 < n) {
		k *= 2;
	}
   	for (int i = n - 1; i >= k; i--) {
   		cout << i << " ";
	}
   	for (int i = 0; i < k; i++) {
   		cout << i << " ";
	}
	cout << '\n';
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
