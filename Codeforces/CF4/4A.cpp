#include <bits/stdc++.h>
 
using namespace std;
void run_case(){
	int w;
	cin>>w;
	if(w<4){
		cout<<"NO"<<'\n';
	}
	else if(w%2==0){
		cout<<"YES"<<'\n';
	}
	else{
		cout<<"NO"<<'\n';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}
