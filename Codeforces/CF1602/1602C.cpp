#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}
	if(a==0){
		return b;
	}
	while(b%a!=0){
		int t=a;
		a=b%a;
		b=t;
	}
	return a;
}

void run_case(){
	int n;
	cin>>n;
	int a[n];
	bool All0=true;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=0){
			All0=false;
		}
	}
	if(All0){
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
		cout<<'\n';
		return;
	}
	vector<int> count(30,0);
	for(int i=0;i<30;i++){
		for(int j=0;j<n;j++){
			if(a[j]&(1<<i)){
				count[i]++;
			}
		}
	}
	int res=count[0];
	for(int i=1;i<30;i++){
		res=gcd(res,count[i]);
	}
//	cout<<res<<'\n';
	for(int i=1;i<=res;i++){
		if(res%i==0){
			cout<<i<<" ";
		}
	}
	cout<<'\n';
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

