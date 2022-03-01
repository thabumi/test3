#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	long long a[n];
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	int m;
	cin>>m;
	vector<pair<long long,int> >v;
	long long def[m];
	long long atk[m];
	for(int i=0;i<m;i++){
		cin>>def[i]>>atk[i];
		v.push_back(make_pair(def[i],i));
	}
	sort(v.begin(),v.end());
	
	vector<int> ind(m,-1);
	int x=0;
	int y=0;
	vector<long long> c;
	vector<int> d;
	while(x<=n-1||y<=m-1){
		if(x==n||(y<=m-1&&v[y].first<=a[x])){
			d.push_back(v[y].second);
			y++;
		}
		else{
			for(int i=0;i<d.size();i++){
				ind[d[i]]=x;
			}
			d.resize(0);
			x++;
		}
	}
/*	for(int i=0;i<m;i++){
		cout<<ind[i];
	}
	return;*/
	for(int i=0;i<m;i++){
		long long MIN;
		if(ind[i]<0){
			MIN=max(def[i]-a[n-1],def[i]+atk[i]-sum);
			cout<<MIN<<'\n';
		}
		else{
			if(sum-a[ind[i]]>=atk[i]){
				cout<<0<<'\n';
			}
			else{
				if(ind[i]==0){
					MIN=max(atk[i]-sum+a[ind[i]],atk[i]+def[i]-sum);
				} 
				else{
					MIN=max(min(atk[i]-sum+a[ind[i]],def[i]-a[ind[i]-1]),atk[i]+def[i]-sum);
				}
				cout<<MIN<<'\n';

			}
		}
	}
	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

