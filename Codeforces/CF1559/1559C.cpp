#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		if(a[0]==0){
			cout<<"1 2"<<'\n';
			return;
		}
		else{
			cout<<"2 1"<<'\n';
			return;
		}
	}
	int k=n-1;
	while (k>=0){
		if(a[k]==0){
			for(int j=1;j<=k+1;j++){
				cout<<j<<" ";
			}
			cout<<n+1<<" ";
			for(int j=k+2;j<=n;j++){
				cout<<j<<" ";
			}
			cout<<'\n';
			break;
		}
		k--;
	}
	if(k==-1){
		cout<<n+1<<" ";
		for(int j=1;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<'\n';
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
