#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int l,r;
	cin>>l>>r;
	if(r<=2*l-1){
		cout<<r-l<<'\n';
	}
	else{
		cout<<(r-1)/2<<'\n';
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
