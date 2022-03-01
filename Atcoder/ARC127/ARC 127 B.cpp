#include <bits/stdc++.h>


using namespace std;
string Perm(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]=='2'){
			s[i]='0';
		}
		else{
			s[i]++;
		}
	}
	return s;
}
string Plus(string s){
	int i=s.size()-1;
	while(s[i]=='2'){
		s[i]='0';
		i--;
	}
	s[i]++;
	return s;
}
void run_case(){
	int n,l;
	cin>>n>>l;
	if(l==1){
		cout<<2;
		return;
	}
	vector<string> res3;	
	string s="2";
	for(int i=1;i<l;i++){
		s+='0';
	}
//	cout<<s;
//	return;
	res3.push_back(s);
	for(int i=1;i<n;i++){
		res3.push_back(Plus(res3[res3.size()-1]));
	}
	vector<string> res1(n);
	vector<string> res2(n);
	for(int i=0;i<n;i++){
		res1[i]=Perm(res3[i]);
		res2[i]=Perm(res1[i]);
	}
	for(int i=0;i<n;i++){
		cout<<res1[i]<<'\n';
	}
	for(int i=0;i<n;i++){
		cout<<res2[i]<<'\n';
	}
	for(int i=0;i<n;i++){
		cout<<res3[i]<<'\n';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	
	return 0;	
}

