#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	int m=max(a[0],max(a[1],a[2]));
	int count=0;
	for(int i=0;i<3;i++){
		if(a[i]==m){
			count++;
		}
	}
	if(count>1){
		m++;
		for(int i=0;i<3;i++){
			cout<<m-a[i]<<" ";
		}
	}
	else{
		for(int i=0;i<3;i++){
			if(a[i]==m){
				cout<<0<<" ";
			}
			else{
				cout<<m+1-a[i]<<" ";
			}
		}
	}
	cout<<'\n';
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

