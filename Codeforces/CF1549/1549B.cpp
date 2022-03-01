#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	string s,t;
	cin>>n>>s>>t;
	int count=0;
	int i=1;
	s='.'+s+'.';
	t='.'+t+'.';
	while(i<=n){
		if(t[i]=='1'){
			if(s[i-1]=='1'){
				count++;
			}
			else if(s[i]=='0'){
				count++;
			}
			else if(s[i+1]=='1'){
				count++;
				s[i+1]='2';
			}
		}
		i++;
	}
	cout<<count<<'\n';
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
