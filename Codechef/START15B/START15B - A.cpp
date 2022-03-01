#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	s=s;
	long long sum=0;
	for(int i=0;i<s.size();i++){
		for(int j=i+1;j<=i+9;j++){
			if(j>=0&&j<s.size()){
				if((int)s[j]-s[i]==i-j||(int)s[j]-s[i]==j-i){
					sum++;
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

