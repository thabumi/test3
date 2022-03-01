#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int a,b,c;
	cin>>a>>b>>c;
	int n=2*abs(a-b);
	if(n<max(a,max(b,c))){
		cout<<-1<<'\n';
	}
	else if(c+abs(a-b)<=n){
			cout<<c+abs(a-b)<<'\n';
		}
	else{
		cout<<c-abs(a-b)<<'\n';
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
