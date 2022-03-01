#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	if(n==1){
		cout<<1;
		return;
	}
	vector<int> adj[n+1];
	int x,y;
	for(int i=1;i<=n-1;i++){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	vector <int> v;
	int j=1;
	v.push_back(j);
	while(true){
		int a=v.size()-1;
		if(adj[v[a]].size()==0){
			v.pop_back();
			continue;
		}
		int b=adj[v[a]][0];
		if(b==n){
			break;
		}
		else{
			v.push_back(b);
			adj[v[a]].erase(adj[v[a]].begin());
			adj[b].erase(find(adj[b].begin(),adj[b].end(),v[a]));
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<n;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}
