#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long n,a,b;
	cin>>n>>a>>b;
	long long N=n%b;
	long long r[2];
	r[0]=1;
	r[1]=a%b;
	if(N==1||(N==r[1]&&n>=a)){
		cout<<"Yes"<<'\n';
		return;
	}
	else{
		if(a==1){
			cout<<"No"<<'\n';
			return;
		}
		long long j=0;
		while(pow(a,j)<=n){
			j++;
		}
		long long i=2;
		long long powofamodb=(a*a)%b;
		while (powofamodb!=r[1]&&i<j){
			if(N==powofamodb){
				cout<<"Yes"<<'\n';
				return;
			}
			powofamodb=(powofamodb*a)%b;
			i++;
		}
		cout<<"No"<<'\n';
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
