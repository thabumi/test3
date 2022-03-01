#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long k;
	cin>>k;
	long long r;
	long long c;
	long long i=1;
	while(i*i<k){
		i++;
	}
	i--;
	if(k-i*i<=i+1){
		r=k-i*i;
		c=i+1;
	}
	if(k-i*i>=i+2){
		r=i+1;
		c=2*i+2-(k-i*i);
	}
	cout<<r<<" "<<c<<'\n';
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
