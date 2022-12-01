#include<bits/stdc++.h>
using namespace std;	
bool used[(1003)*(1003)+1],used1[300];
long long d[(1003)*(1003)+1];
long long type[(1003)*(1003)+1];
vector<long long> adj[(1003)*(1003)+1];
bool check(long long a, long long b) {
	return d[a] < d[b];
}
void solve(){
	long long m,n,i,j,k;
	cin >> n >> m;
	vector<long long> v[300];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin >> k ;
			type[(m+2)*i+j]=k;
			v[k].push_back((m+2)*i+j);
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
		    k=(m+2)*i+j;
			adj[k].push_back((m+2)*i+j-1);
			adj[k].push_back((m+2)*i+j+1);
			adj[k].push_back((m+2)*(i-1)+j);
			adj[k].push_back((m+2)*(i+1)+j);
		}
	}
	multiset<long long, bool(*)(long long, long long)> q(check);
	q.insert(m+3);
	used[m+3]=true;
	d[m+3]=0;
	while(!q.empty()){
		long long t=*q.begin();
		long long g=type[t];
		if(g!=0&&used1[g]==0){
			used1[g]=1;
			for(auto x:v[g]){
				if(used[x]==0){
					used[x]=1;
					d[x]=d[t];
					q.insert(x);
				}
			}
		}
		for(auto x:adj[t]){
			if(used[x]==0){
				used[x]=1;
				d[x]=d[t]+1;
				q.insert(x);
			}
		}
		q.erase(q.begin());
	}
	cout << d[(m+2)*(n)+(m)];
}
signed main(){
	long long t;
	t=1;
	while(t--){
		solve();
	}
}