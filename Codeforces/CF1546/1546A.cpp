#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int c[n];
	int sum=0;
	int sumsgn=0;
	for(int i=0;i<n;i++){
		c[i]=a[i]-b[i];
		sum+=c[i];
		if(c[i]>0){
			sumsgn+=c[i];
		}
	}
	if(sum!=0){
		cout<<"-1"<<'\n';
		return;
	}
	else{
		cout<<sumsgn<<'\n';
		int d[sumsgn];
		int e[sumsgn];
		int k=0;
		int l=0;
		while (k<sumsgn){
			for(int j=0;j<n;j++){
				while(c[j]>0){
					d[k]=j+1;
					k++;
					c[j]--;
				}
			}
		}
		while (l<sumsgn){
			for(int j=0;j<n;j++){
				while(c[j]<0){
					e[l]=j+1;
					l++;
					c[j]++;
				}
			}
		}
		for(int i=0;i<sumsgn;i++){
			cout<<d[i]<<" "<<e[i]<<'\n';
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
