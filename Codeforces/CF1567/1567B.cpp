#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int a,b;
	cin>>a>>b;
	if(a%4==0){
		if(b==0){
			cout<<a<<'\n';
		}
		else if(b==a){
			cout<<a+2<<'\n';
		}
		else{
			cout<<a+1<<'\n';
		}
	}
	else if(a%4==2){
		if(b==1){
			cout<<a<<'\n';
		}
		else if(b==a+1){
			cout<<a+2<<'\n';
		}
		else{
			cout<<a+1<<'\n';
		}
	}
	else if(a%4==3){
		if(b==a){
			cout<<a<<'\n';
		}
		else if(b==0){
			cout<<a+2<<'\n';
		}
		else {
			cout<<a+1<<'\n';
		}
	}
	else{
		if(b==a-1){
			cout<<a<<'\n';
		}
		else if(b==1){
			cout<<a+2<<'\n';
		}
		else{
			cout<<a+1<<'\n';
		}
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

