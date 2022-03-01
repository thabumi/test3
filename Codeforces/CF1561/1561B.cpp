#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int a,b;
	cin>>a>>b;
	int n=a+b;
	int M=max(a,b);
	int m=min(a,b);
	if(n%2==0){
		int Mbreak=n/2+m;
		int mbreak=n/2-m;
		cout<<(Mbreak-mbreak)/2+1<<'\n';
		for(int i=mbreak;i<=Mbreak;i+=2){
			cout<<i<<" ";
		}
		cout<<'\n';
		return;
	}
	else{
		int Mbreak=(n+1)/2+m;
		int mbreak=(n-1)/2-m;
		cout<<Mbreak-mbreak+1<<'\n';
		for(int i=mbreak;i<=Mbreak;i++){
			cout<<i<<" ";
		}
		cout<<'\n';
		return;
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
