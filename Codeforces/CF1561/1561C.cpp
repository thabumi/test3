#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long n;
	cin>>n;
	vector<vector<long long> > v(n+1);
	for(long long i=1;i<=n;i++){
		v[i].resize(1);
		cin>>v[i][0];
		v[i].resize(v[i][0]+1);
		for(long long j=1;j<=v[i][0];j++){
			cin>>v[i][j];
		}
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=v[i][0];j++){
			v[i][j]=v[i][j]-j+2;
		}
	}
	vector<long long> maxx(n+1);
	for(long long i=1;i<=n;i++){
		maxx[i]=v[i][1];
		for(long long j=2;j<=v[i][0];j++){
			if(maxx[i]<v[i][j]){
				maxx[i]=v[i][j];
			}
		}
	}
	vector <pair < long long, long long > > p(n+1);
	for(int i=1;i<=n;i++){
		p[i].first=maxx[i];
		p[i].second=v[i][0];
	}
	sort(p.begin()+1,p.end());
	vector <long long> sum(n+1);
	sum[1]=0;
	for(long long i=2;i<=n;i++){
		sum[i]=sum[i-1]+p[i-1].second;
		p[i].first-=sum[i];
	}
	long long result=p[1].first;
	for(long long i=2;i<=n;i++){
		if(result<p[i].first){
			result=p[i].first;
		}
	}
	cout<<result<<'\n';		
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
