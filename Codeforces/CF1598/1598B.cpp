#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n][5];
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	for(int k=0;k<5;k++){
		for(int l=k+1;l<5;l++){
			int countk=0;
			int countl=0;
			bool b=true;
			for(int i=0;i<n;i++){
				if(a[i][k]==0&&a[i][l]==0){
					b=false;
					break;
				}
				if(a[i][k]==1){
					countk++;
				}
				if(a[i][l]==1){
					countl++;
				}
			}			
			if(!b){
				continue;
			}
			if(countk>=(n/2)&&countl>=(n/2)){
				cout<<"YES\n";
				return;
			}
		}
	}
	cout<<"NO\n";
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

