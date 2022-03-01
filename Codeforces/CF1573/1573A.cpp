#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int res=0;
	for(int i=0;i<n-1;i++){
		if(s[i]!='0'){
			res+=(s[i]-'0')+1;
		}
	}
	if(s[n-1]!='0'){
		res+=(int)(s[n-1]-'0');
	}
	cout<<res<<'\n';
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

