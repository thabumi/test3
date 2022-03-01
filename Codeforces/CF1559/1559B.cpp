#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	string s;
	cin>>n>>s;
	s='.'+s+'.';
	vector<int> v;
	
	for(int i=0;i<=n+1;i++){
		if(s[i]!='?'){
			v.push_back(i);
		}
	}
	int k=v.size();
	if(k==2){
		string t="B";
		for(int i=1;i<n;i++){
			t+=(char)(148-t[i-1]);
		}
		cout<<t<<'\n';
		return;
	}
	else{
		for(int i=1;i<k-1;i++){
			for(int j=v[i]-1;j>v[i-1];j--){
				s[j]=(char)(148-s[j+1]);
			}
		}
		for(int j=v[k-2]+1;j<s.size()-1;j++){
			s[j]=(char)(148-s[j-1]);
		}
		s.erase(0,1);
		s.erase(s.size()-1,1);
		cout<<s<<'\n';
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
