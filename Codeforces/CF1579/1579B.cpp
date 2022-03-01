#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	long long MAX=1e10;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0;
	vector<int> res1;
	vector<int> res2;
	vector<int> res3;
	while(i<n){
		int k=(int)(min_element(a,a+n)-a);
		if(k==i){
			a[i]=MAX;
			i++;
			continue;
		}
		res1.push_back(i+1);
		res2.push_back(k+1);
		res3.push_back(k-i);
		for(int j=k;j>i;j--){
			swap(a[j],a[j-1]);
		}
		a[i]=MAX;
		i++;
	}
	cout<<res1.size()<<'\n';
	for(int i=0;i<res1.size();i++){
		cout<<res1[i]<<" "<<res2[i]<<" "<<res3[i]<<'\n';
	}
	return;
/*	cout<<n<<'\n';
	int i=0;
	while(i<n){
		vector<pair<int,int>> t(v);
		sort(t.begin(),t.end());
		if(i<t[i].second){
			int k=t[i].second-i;
			for(int j=t[i].second)
			cout<<i+1<<" "<<t[i].second+1<<" "<<t[i].second-i<<'\n';
			i++;
		}
		else if(i==t[i].second){
			cout<<i+1<<" "<<t[i].second+1<<" "<<0<<'\n';
			i++;
		}
		else{
			for(int i=0;i<n;i++){
				cout<<v[i].second<<'\n';
			}
			cout<<i<<" "<<t[i].second;
			return;
		}
	}*/
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

