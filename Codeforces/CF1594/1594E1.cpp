#include <bits/stdc++.h>

using namespace std;
long long MOD=1e9+7;
long long Power(long long a,long long b)
{
    if (b == 0) 
        return 1;
    if(b==1){
    	return a%MOD;
	}
    long long t = Power(a, b / 2);     	
    t = (t * t) % MOD; 
    if (b % 2 == 1) 
        t = (t * a) % MOD;
    return t;
} 
void run_case(){
	int k;
	cin>>k;
	if(k==1){
		cout<<6;
		return;
	}
	if(k==2){
		cout<<96;
		return;
	}
	long long Pow=1;
	for(int i=1;i<=k;i++){
		Pow*=2;
	}
	Pow-=2;
	long long res=6;
	long long l=Power(4LL,Pow);
	res=(res*l)%MOD;
	cout<<res;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

