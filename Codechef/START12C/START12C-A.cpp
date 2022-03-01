#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int a[7];
	int count1=0,count2=0;
	for(int i=0;i<7;i++){
		cin>>a[i];
		if(a[i]){
			count1++;
			
		}
		else{
			count2++;
		}
	}
	if(count1>count2){
		cout<<"YES"<<'\n';
	}
	else{
		cout<<"NO"<<'\n';
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

