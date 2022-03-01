#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	string s;
	cin>>n>>s;
	s='.'+s;
	size_t found=s.find('0');
	if(found!=string::npos){
		if(found<=n/2){
			cout<<found<<" "<<n<<" "<<found+1<<" "<<n<<'\n';
			return;
		}
		if(found>n/2){
			cout<<1<<" "<<found<<" "<<1<<" "<<found-1<<'\n';
			return;
		}
	}
	else{
		if(n%2==0){
			cout<<1<<" "<<n<<" "<<1<<" "<<n/2<<'\n';
			return;
		}
		if(n%2==1){
			cout<<1<<" "<<n-1<<" "<<1<<" "<<n/2<<'\n';
			return;
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
