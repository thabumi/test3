#include <bits/stdc++.h>

using namespace std;
void run_case(){
	string s;
	cin>>s;
	int k=s.size();
	bool b1=true;
	bool b2=true;
	int ind1=-1;
	int ind2=-1;
	for(int i=k-1;i>=0;i--){
		if(b1&&s[i]=='0'){
			ind1=i;
			b1=false;
		}
		if(b2&&s[i]=='5'){
			ind2=i;
			b2=false;
		}
		if((!b1)&&(!b2)){
			break;
		}
	}
	int res1=-1;
	int res2=-1;
	if(ind1>=0){
		for(int i=ind1-1;i>=0;i--){
			if(s[i]=='0'||s[i]=='5'){
				res1=i;
				break;
			}
		}
	}
	if(ind2>=0){
		for(int i=ind2-1;i>=0;i--){
			if(s[i]=='2'||s[i]=='7'){
				res2=i;
				break;
			}
		}
	}
	int min1=k+1;
	int min2=k+1;
	if(res1>=0){
		min1=k-res1-2;
	}
	if(res2>=0){
		min2=k-res2-2;
	}
	cout<<min(min1,min2)<<'\n';
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

