#include <bits/stdc++.h>


using namespace std;

long long MIN=-8999999999999999;
long long MAX=8999999999999999;
vector<int> type;
vector<int> a;
vector<int> Floor;
vector<long long> value;
vector<vector<int>> g;
vector<bool> visited;
long long Val(int n){
	if(visited[n]){
		return value[n];
	}
	if(type[n]==1){
		value[n]=a[n];
	}
	else if(Floor[n]%2==1){
		long long Max=MAX;
		for(auto t:g[n]){
			if(Floor[t]<Floor[n]){
				continue;
			}
			if(Val(t)<Max){
				Max=Val(t);
			}
		}
		value[n]=Max+a[n];
	}
	else{
		long long Min=MIN;
		for(auto t:g[n]){
			if(Floor[t]<Floor[n]){
				continue;
			}
			if(Val(t)>Min){
				Min=Val(t);
			}
		}
		value[n]=Min+a[n];
	}
	visited[n]=true;
	return value[n];
}
/*
void dfs(int v,int p) {
    bool leaves = false;
    for(auto t : g[v]) {
        if(t == p){
        	continue;
		}
		Floor[t]=Floor[v]+1;
        dfs(t, v);
        if(type[t] == 1){
        	leaves=true;
		}
    }
    if (v != p) {
        if(!leaves){
        	type[v]=1;
		}
        else {
        	type[v]=2;
		}
    }
}
*/
void dfs(int v,int p) {
    for(auto t : g[v]) {
        if(t == p){
        	continue;
		}
		Floor[t]=Floor[v]+1;
        dfs(t, v);
    }
}


void run_case(){
	int n,k;
	cin>>n>>k;
	a.resize(0);
	for(int i=0;i<n;i++){
		long long z;
		cin>>z;
		a.push_back(z);
	}
	visited.assign(n, false);
	g.assign(n,vector<int>());
	type.assign(n,-1);
	type[0]=0;
	Floor.assign(n,0);
	Floor[0]=1;
	value.assign(n,MIN);
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		g[x].emplace_back(y);
		g[y].emplace_back(x);
	}
	for(int i=1;i<n;i++){
		type[i]=g[i].size();
	}
	dfs(0,0);
	long long Res=Val(0);
/* test	
	for(int i=0;i<n;i++){
//		cout<<type[i]<<'\n';
	}
	
	for(int i=0;i<n;i++){
//		cout<<Floor[i]<<'\n';
	}
	for(int i=0;i<n;i++){
//		cout<<value[i]<<'\n';
	}
//	return;
// end test */
	cout<<Res<<'\n';
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

