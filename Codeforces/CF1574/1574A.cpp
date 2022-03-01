#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	vector<string> s(n+1,"");
	for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++){
			s[i]+='(';
		}
		for(int j=0;j<i;j++){
			s[i]+=')';
		}
	}
	for(int i=0;i<n;i++){
		string k="";
		k=k+s[i]+s[n-i];
		cout<<k<<'\n';
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

