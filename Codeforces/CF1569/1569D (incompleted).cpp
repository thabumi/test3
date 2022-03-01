#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,m,k;
	cin>>n>>m>>k;
	int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int y[m];
	for(int j=0;j<m;j++){
		cin>>y[j];
	}
	int X[k];
	int Y[k];
	for(int i=0;i<k;i++){
		cin>>X[i]>>Y[i];
	}
	int y=0,z=0;
	vector<int> c;
	vector<int> count;
	count.push_back(0);
	while(y<n||z<k){
		
		if(z==k||(y<n&&x[y]<=X[z]){
			c.push_back(x[y]);
			count.push_back(0);
			y++;
		}
		else{
			c.push_back(b[j]);
			count[count.size()-1]++;
			j++;
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
