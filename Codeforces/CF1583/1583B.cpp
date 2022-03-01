#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n,m;
	cin>>n>>m;
	int a,b,c;
	vector<int> v(n+1,0);
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		v[b]++;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			for(int j=1;j<=n;j++){
				if(j!=i){
					cout<<i<<' '<<j<<'\n';
				}
			}
			break;
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

