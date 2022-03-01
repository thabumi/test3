#include <bits/stdc++.h>

using namespace std;
long long MOD=1e9+7;
long long fact(int n){
	long long res=1;
	for(int i=3;i<=n;i++){
		res=res*i;
		res%=MOD;
	}
	return res;
}
void run_case(){
	int n;
	cin>>n;
	n*=2;
	cout<<fact(n)<<'\n';
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

