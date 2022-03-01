#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n];
	if(n%2==0){
		for(int i=0;i<n;i++){
			if(i%2==1){
				a[i]=i;
			}
			else{
				a[i]=i+2;
			}
		}
	}
	else{
		a[0]=3;
		a[1]=1;
		a[2]=2;
		for(int i=3;i<n;i++){
			if(i%2==1){
				a[i]=i+2;
			}
			else{
				a[i]=i;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<'\n';
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
