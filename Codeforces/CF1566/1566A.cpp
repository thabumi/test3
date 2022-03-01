#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,s;
	cin>>n>>s;
	int m=ceil(n*1.0/2);
	cout<<s/(n-m+1)<<'\n';
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

