#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,m;
	cin>>n>>m;
	int a[m];
	vector <pair <int,int> > v(m);
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(a[i]<a[j]){
				count++;
			}
		}
	}
	cout<<count<<'\n';
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

