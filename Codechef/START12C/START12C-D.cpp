#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long N,M,X,Y;
	cin>>N>>M>>X>>Y;
	if(2*X<=Y){
		cout<<X*(N-1+M-1)<<'\n';
	}
	else{
		long long res=0;
		if((N+M)%2==1){
			if(N<M){
				res+=Y*(N-1);
				res+=min(X,Y)*(M-N-1);
				res+=X;
			}
			else{
				res+=Y*(M-1);
				res+=min(X,Y)*(N-M-1);
				res+=X;
			}
		}
		else{
			if(N<M){
				res+=Y*(N-1);
				res+=min(X,Y)*(M-N);
			}
			else{
				res+=Y*(M-1);
				res+=min(X,Y)*(N-M);
			}
		}
		cout<<res<<'\n';
	}
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

