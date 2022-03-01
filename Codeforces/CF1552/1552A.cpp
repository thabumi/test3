#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void run_case(){
	int n;
	string s;
	cin>>n>>s;
	string v=s;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]>v[j]){
				char c=v[i];
				v[i]=v[j];
				v[j]=c;
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]!=v[i]){
			count++;
		}
	}
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
