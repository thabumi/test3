#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n;
	cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	if (q[0] != n && q[q.size() - 1] != n) {
		cout << -1 << '\n';
		return;
	}
	if (q[0] == n) {
		cout << n << " ";
		for (int i = n - 1; i >= 1; i--) {
			cout << q[i] << " ";
		}
		cout << '\n';
	}
	else {
		for (int i = n - 2; i >= 0; i --) {
			cout << q[i] << " ";
		}
		cout << n << '\n';
	}
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
