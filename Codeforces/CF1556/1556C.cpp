#include <bits/stdc++.h>

using namespace std;
long long summ(int i, int j, vector<long long> v){
	long long s=0;
	for(int k=i;i<=j;i++){
		s+=v[i];
	}
	return s;
}
void run_case(){
	int n;
	cin>>n;
	vector <long long> v(n);
	long long res=0;
	long long t=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=1;i<n;i+=2){
		res+=min(v[i],v[i-1]);
	}
	for(int i=1;i<n;i+=2){
		v[i]=0-v[i];
	}
	for(int i=0;i<n;i+=2){
		if(v[i]+v[i+1]<0){
			continue;
		}
		for(int j=i+3;j<n;j+=2){
			long long s=summ(i+1,j-1,v);
			if(s==0){
				res+=min(v[i],abs(v[j]));
			}			
			else if(s<0){
				long long count=min(v[i],abs(v[j]+s))+s;
				res+=max(count,t);
				break;
			}
			else{
				long long count=min(v[i]+s,abs(v[j]))-s;
				res+=max(count,t);
			}
		}
	}
	cout<<res<<'\n';
}
int main(){
	run_case();
	return 0;	
}
