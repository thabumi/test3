#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long c,d;
	cin>>c>>d;
	if((c+d)%2==1){
		cout<<-1<<'\n';
	}
	else if(c==d&&c==0){
		cout<<0<<'\n';
	}
	else if(c==d&&c!=0){
		cout<<1<<'\n';
	}
	else if(c+d==0&& c!=0){
		cout<<1<<'\n';
	}
	else{
		 cout<<2<<'\n';
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
