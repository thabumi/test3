#include <bits/stdc++.h>

using namespace std;
int Gcd(int x,int y){
	if(x>y){
		swap(x,y);
	}
	while(y%x!=0){
		int t=x;
		x=y%x;
		y=t;
	}
	return x;
}
void run_case(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool AE=true;
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			AE=false;
			break;
		}
	}
	if(AE){
		cout<<-1<<'\n';
		return;
	}
	sort(a,a+n);
	vector<int> v;
	for(int i=1;i<n;i++){
		int x=a[i]-a[i-1];
		if(x>0){
			v.push_back(x);
		}
	}
	int res=v[0];
	for(int i=1;i<v.size();i++){
		res=Gcd(res,v[i]);
	}
	cout<<res<<'\n';
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

