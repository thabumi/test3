#include <bits/stdc++.h>

using namespace std;
int value(string s){
	if(s=="++"||s=="--"){
		return 0;
	}
	if(s=="+-"){
		return 2;
	}
	if(s=="-+"){
		return -2;
	}
	return 0;
}
void run_case(){
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	s='.'+s;
	int l[q];
	int r[q];
	
	for(int i=0;i<q;i++){
		cin>>l[i]>>r[i];
	}
	
	if(s.size()>=5){
	
	vector<int> val1(n+1);
	vector<int> val2(n+1);
	
	string T1=s.substr(1,2);
	val1[2]=value(T1);
	for(int i=4;i<=n;i+=2){
		val1[i]=val1[i-2]+value(s.substr(i-1,2));
	}
	
	string T2=s.substr(2,2);
	val2[3]=value(T2);
	for(int i=5;i<=n;i+=2){
		val2[i]=val2[i-2]+value(s.substr(i-1,2));
	}
	
	for(int i=0;i<q;i++){
		if((l[i]-r[i])%2==0){
			cout<<1<<'\n';
		}
		else if(l[i]%2==0){
			if((val2[r[i]]-val2[l[i]-1])==0){
				cout<<0<<'\n';
			}
			else{
				cout<<2<<'\n';
			}
		}
		else{
			if(val1[r[i]]-val1[l[i]-1]==0){
				cout<<0<<'\n';
			}
			else{
				cout<<2<<'\n';
			}
		}
	}}
	else{
		if(s.size()==4){
			for(int i=0;i<q;i++){
				if((l[i]-r[i])%2==0){
					cout<<1<<'\n';
				}
				else{
					string m=s.substr(l[i],r[i]-l[i]+1);
						if(m=="+-"||m=="-+"){
							cout<<2<<'\n';
						}
						else{
							cout<<0<<'\n';
						}
					
				}
			}
		}
		if(s.size()==3){
			for(int i=0;i<q;i++){
				if((l[i]-r[i])%2==0){
					cout<<1<<'\n';
				}
				else{
					string m=s.substr(1,2);
						if(m=="+-"||m=="-+"){
							cout<<2<<'\n';
						}
						else{
							cout<<0<<'\n';
						}
					
				}	
			}
		}
		if(s.size()==2){
			for(int i=0;i<q;i++){
				cout<<1<<'\n';
			}
		}
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
