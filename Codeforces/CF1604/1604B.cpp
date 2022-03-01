#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n % 2 == 0) {
		cout << "YES\n";
		return;
	}
	for (int i  = 0 ; i < n - 1; i++) {
		if (a[i] >= a[i + 1]) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

