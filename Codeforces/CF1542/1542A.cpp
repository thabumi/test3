#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int counto=0;
	int counte=0;
	int a[2*n];
	for(int i=0;i<2*n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			counto++;
		}
		else{
			counte++;
		}
	}
	if(counto==counte){
		cout<<"Yes"<<'\n';
	}
	else{
		cout<<"No"<<'\n';
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
