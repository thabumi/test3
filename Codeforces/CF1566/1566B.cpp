#include <bits/stdc++.h>

using namespace std;
void run_case(){
	string s;
	cin>>s;
	if(s.find("0")==string::npos){
		cout<<0<<'\n';
	}
	else{
		s='.'+s+'.';
		int count=0;
		for(int i=0;i<s.size();i++){
			if(s[i+1]=='0'&&s[i]!='0'){
				count++;
			}
		}
		if(count==1){
			cout<<1<<'\n';
		}
		else{
			cout<<2<<'\n';
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

