#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	if(n%3!=0){
		for(int i=0;i<n;i++){
			cout<<3;
		}
		cout<<'\n';
	}
	else{
		for(int i=0;i<n-1;i++){
			cout<<3;
		}
		cout<<9<<'\n';
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

