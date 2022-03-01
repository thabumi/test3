#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	long long a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long r[n+1];
	long long k[n+1];
	for (int i=1;i<=n;i++){
		r[i]=i%a[i];
		k[i]=i/a[i]+(2*r[i]/a[i])+1;
	}
	int count=0;
	for(int i=1;i<=n;i++){
		for(int j=k[i]*a[i]-r[i];j<=n;j+=a[i]){
			if(a[i]*a[j]==i+j){
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
