#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	char c;
	string s;
	cin>>n>>c>>s;
	bool allc=true;	
	for(int i=0;i<n;i++){
		if(s[i]!=c){
			allc=false;
			break;
		}
	}
	if(allc){
		cout<<0<<'\n';
		return;
	}
	bool b1=false;
	int res=-1;
	for(int i=n/2;i<n;i++){
		if(s[i]==c){
			b1=true;
			res=i+1;
			break;
		}
	}
	if(b1){
		cout<<1<<'\n'<<res<<'\n';
		return;
	}
	cout<<2<<'\n';
	cout<<n<<" "<<n-1<<'\n';
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

