#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,k;
	cin>>n>>k;
	long long a[n];
	int count=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<pair<long long,int> >v(n);
	for(int i=0;i<n;i++){
		v[i].first=a[i];
		v[i].second=i;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++){
		if(v[i].second+1!=v[i+1].second){
			count++;
		}
	}
	if(count<=k){
		cout<<"Yes"<<'\n';
	}
	else{
		cout<<"No"<<'\n';
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
