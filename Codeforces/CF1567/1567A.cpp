#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string t="";
	int i=0;
	while(i<n){
		if(s[i]=='L'){
			t+="LR";
			i+=2;
		}
		else if(s[i]=='D'){
			t+='U';
			i++;
		}
		else{
			t+='D';
			i++;
		}
	}
	cout<<t<<'\n';
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

