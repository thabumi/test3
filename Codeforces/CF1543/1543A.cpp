#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long a,b;
	cin>>a>>b;
	if(a==b){
		cout<<0<<" "<<0<<'\n';
	}
	else{
		long long d=abs(a-b);
		long long e=min(a%d,d-(a%d));
		cout<<d<<" "<<e<<'\n';
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
