#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long n,m,k;
	cin>>n>>m>>k;
	k--;
	if(n==1&&m==0){
		if(k>0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		return;
	}
	if(m<n-1){
		cout<<"NO\n";
		return;
	}
	long long E=n*(n-1)/2;
	if(m==E){
		if(k>1){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		return;
	}
	if(m>E){
		cout<<"NO\n";
		return;
	}
	if(k>2){
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

