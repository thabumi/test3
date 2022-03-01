#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin >> n;
	int a[n + 1];
	int M = 0;
	for(int i = 1 ;i <=n;i++) {
		cin >> a[i];
		M = max(a[i] - i, M);
	}
	cout << M << '\n';
	
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

