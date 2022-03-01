#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1){
		cout<<"-1 -1"<<'\n';
		return;
	}
	if(s[0]=='a'){
		for(int i=1;i<n;i++){
			if(s[i]=='b'){
				cout<<i<<" "<<i+1<<'\n';
				return;
			}
		}
		cout<<"-1 -1"<<'\n';
	}
	else if(s[0]=='b'){
		for(int i=1;i<n;i++){
			if(s[i]=='a'){
				cout<<i<<" "<<i+1<<'\n';
				return;
			}
		}
		cout<<"-1 -1"<<'\n';
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
