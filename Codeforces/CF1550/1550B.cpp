#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	int part=1;
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]){
			part++;
		}
	}
	if(b<0){
		cout<<a*n+b*(part/2+1)<<'\n';
	}
	if(b>0){
		cout<<(a+b)*n<<'\n';
	}
	if(b==0){
		cout<<a*n<<'\n';
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
