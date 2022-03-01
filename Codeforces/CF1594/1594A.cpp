#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long MOD=1e9+7;
	int n,k;
	cin>>n>>k;
	long long res=1;
	long long sum=0;
	for(int i=0;i<=31;i++){
		if(k&(1<<i)){
			sum+=res;
			sum%=MOD;
		}
		res*=n;
		res%=MOD;
	}
	cout<<sum<<'\n';
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

