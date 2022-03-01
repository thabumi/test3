#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n];
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		v[i].first=a[i];
		v[i].second=i;
	}
	sort(v.begin(),v.end());
	int sum=0;
	for(int i=0;i<n-1;i++){
		sum+=v[i].first;
	}
	if(sum<=v[n-1].first){
		cout<<sum<<'\n';
		for(int i=0;i<n-1;i++){
			for(int j=0;j<v[i].first;j++){
				cout<<v[i].second+1<<" "<<v[n-1].second+1<<'\n';
			}
		}
		return;
	}
	
	int res=(sum+v[n-1].first)/2;
	cout<<res<<'\n';
	int l=0;
	while(sum>v[n-1].first){
		int k=v[l].first;
		for(int j=0;j<k;j++){
			cout<<v[l].second+1<<" "<<v[l+1].second+1<<'\n';
			v[l].first--;
			v[l+1].first--;
			sum-=2;
			if(sum<=v[n-1].first){
				break;
			}
		}
		l++;
	}
	for(int i=0;i<n-1;i++){
			for(int j=0;j<v[i].first;j++){
				cout<<v[i].second+1<<" "<<v[n-1].second+1<<'\n';
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

