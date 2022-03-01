#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	s1='.'+s1+'.';
	s2='.'+s2+'.';
	vector<int> v;
	v.push_back(0);
	for(int i=0;i<s1.size();i++){
		if((s1[i]+s2[i]=='0'+'1')){
			v.push_back(i);
		}
	}
	v.push_back(s1.size()-1);
	int m=v.size();
	int sum=0;
	sum+=(m-2)*2;
	for(int i=0;i<m-1;i++){
		for(int j=v[i]+1;j<v[i+1];j++){
			if(s1[j]=='0'){
				if(s1[j-1]=='1'&&j-1>v[i]){
					sum+=2;
					s1[j-1]='.';
				}
				else if(s1[j+1]=='1'&&j+1<v[i+1]){
					sum+=2;
					s1[j+1]='.';
				}
				else{
					sum+=1;
				}
			}
		}
	}
	cout<<sum<<'\n';
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

