#include <bits/stdc++.h>
 
using namespace std;
void run_case(){
	string s;
	cin>>s;
	int count1=0;
	int count2=0;
	int count3=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'){
			count1++;
		}
		else if(s[i]=='B'){
			count2++;
		}
		else{
			count3++;
		}
	}	
	if(count1+count3==count2){
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
