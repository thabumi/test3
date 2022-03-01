#include <bits/stdc++.h>

using namespace std;
void run_case(){
	string s;
	cin>>s;
	int i=s.size();
	while(s.size()>0){
		if(s[0]=='a'+i-1){
			s.erase(0,1);
			i--;
		}
		else if(s[s.size()-1]=='a'+i-1){
			s.erase(s.size()-1,1);
			i--;
		}
		else{
			cout<<"NO"<<'\n';
			break;
		}
	} 
	if(s.size()==0){
		cout<<"YES"<<'\n';
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
