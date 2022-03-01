#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long s,n,k;
	cin>>s>>n>>k;
	if(k==1){
		if(s/n>=2){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
		return;
	}
	if(k>s){
		cout<<"NO\n";
		return;
	}
	if(k==s){
		cout<<"YES\n";
		return;
	}
	if(n<k){
		
	}
	long long l=n/k;
	if(l*(k+1)+n-l>s){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
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

