#include <bits/stdc++.h>

using namespace std;
void reverse(int p, int v[]){
	for(int i=1;i<=p/2;i++){
		swap(v[i],v[p+1-i]);
	}
}
void run_case(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if((a[i]-i)%2!=0){
			cout<<-1<<'\n';
			return;
		}
	}
	cout<<5*(n-1)/2<<'\n';
	int f1;
	int f2;
	int f3;
	for(int i=n;i>=3;i-=2){
		for(int j=1;j<=n;j++){
			if(a[j]==i){
				f1=j;
			}
		}
		
		reverse(f1,a);
		cout<<f1<<" ";
		for(int j=1;j<=n;j++){
			if(a[j]==i-1){
				f2=j-1;
				f3=j+1;
			}
		}
		reverse(f2,a);
		cout<<f2<<" ";
		reverse(f3,a);
		cout<<f3<<" ";
		reverse(3,a);
		cout<<3<<" ";
		reverse(i,a);
		cout<<i<<" ";
	}
	cout<<'\n';
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
