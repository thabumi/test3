#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n,m;
	cin>>n>>m;
	char c[n+1][m];
	for(int j=0;j<m;j++){
		c[0][j]='.';
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			cin>>c[i][j];
		}
	}
	int x;
	int y;
	int b[m];
	b[0]=0;
	for(int i=1;i<m;i++){
		b[i]=1;
		for(int j=0;j<n;j++){
			if(c[j+1][i-1]=='X'&&c[j][i]=='X'){
				b[i]=0;
				break;
			}
		}
	}
	int sum[m];
	sum[0]=0;
	for(int i=1;i<m;i++){
		sum[i]=sum[i-1]+b[i];
	}
//	for(int i=0;i<m;i++){
//		cout<<b[i]<<" ";
//	}
//	cout<<'\n';
//	for(int i=0;i<m;i++){
//		cout<<sum[i]<<" ";
//	}
//	cout<<'\n';
//	return;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>x>>y;
		x--;
		y--;
//		cout<<sum[y]-sum[x]<<'\n';
		if((sum[y]-sum[x])==(y-x)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

