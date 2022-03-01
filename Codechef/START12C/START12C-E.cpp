#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int N,K;
	cin>>N>>K;
	string s;
	cin>>s;
	
	int count=0;
	vector <bool> Bad(N,false);
	for(int i=0;i<N;i++){
		if(s[i]=='1'){
			if( ( (i-K<0) ||s[i-K]!='1')&&((i+K>=N)||s[i+K]!='1')){
				Bad[i]=true;
			}
		}
	}
	for(int i=0;i<N;i++){
		if(Bad[i]){
			if(i+2*K<N){
				if(Bad[i+2*K]){
					count++;
					Bad[i+2*K]=false;
				}
				else{
					count++;
				}
			}
			else{
				count++;
			}
		}
	}
	cout<<count<<'\n';
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

