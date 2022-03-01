#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	char a[2][n];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<n;j++){
		if(a[0][j]=='1'&&a[1][j]=='1'){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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

