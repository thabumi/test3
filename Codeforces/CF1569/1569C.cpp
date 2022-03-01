#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long n;
	cin>>n;
	long long a[n];
	cin>>a[0];
	long long m=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>m){
			m=a[i];
		}
	}
	long long count1=0;
	long long count2=0;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			count1++;
		}
		if(a[i]==m-1){
			count2++;
		}
	}
	if(count1>=2){
		long long res=1;
		for(long long i=1;i<=n;i++){
			res=(res*i)%998244353;
		}
		cout<<res<<'\n';
		return;
	}
	else{
		if(count2==0){
			cout<<0<<'\n';
			return;
		}
		else{
			long long res=1;
			for(long long i=1;i<=n;i++){
				if(i==count2+1){
					continue;
				}
				res=(res*i)%998244353;
			}
			res=(res*count2)%998244353;
			cout<<res<<'\n';
			return;
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

