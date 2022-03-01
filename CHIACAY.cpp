#include <bits/stdc++.h>

using namespace std;
long long MOD=1000000007;
long long Pow(long long a, long long b){
	if(b==0){
		return 1;
	}
	if(b>=1){
		long long t=Pow(a,b/2);
		t=(t*t)%MOD;
		if(b%2==1){
			t=(t*a)%MOD;
		}
		return t;
	}

}

void run_case(){
	
	long long N,x,y;
	cin>>N>>x>>y;
	long long f[N+1];
	f[0]=1;
	for(long long i=1;i<=N;i++){
		f[i]=i*f[i-1];
	
		f[i]%=MOD;
	}
	long long sum=0;
	long long X=min(x,N-y);
	long long Y=max(x,N-y);
	long long res[N+1];
	long long rev[N+1];
	rev[N]=Pow(f[N],MOD-2);
	for(long long i=N-1;i>=0;i--){
		rev[i]=(rev[i+1]*(i+1))%MOD;
	}
	if((Y-X+1)*2<=N+1){
		for(int i=X;i<=Y;i++){
			if(i*2>N&&N-i>=X){
				res[i]=res[N-i];
			}
			else{
				res[i]=(rev[i]*rev[N-i])%MOD;
			}
		}
		for(int i=X;i<=Y;i++){
			sum+=res[i];
		}
		sum%=MOD;
		sum=(sum*f[N])%MOD;
		cout<<sum;
	}
	else{
		for(int i=0;i<=X-1;i++){
			res[i]=(rev[i]*rev[N-i])%MOD;
		}
		for(int i=Y+1;i<=N;i++){
			if(i*2>N&&N-i<=X-1){
				res[i]=res[N-i];
			}
			else{
				res[i]=(rev[i]*rev[N-i])%MOD;
			}
		}
		for(int i=0;i<=X-1;i++){
			sum+=res[i];
		}
		for(int i=Y+1;i<=N;i++){
			sum+=res[i];
		}
		sum%=MOD;
		sum=(sum*f[N])%MOD;
		long long S=Pow(2,N);
		if(S-sum<0){
			sum=S-sum+MOD;
		}
		else{
			sum=S-sum;
		}
		cout<<sum;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}
