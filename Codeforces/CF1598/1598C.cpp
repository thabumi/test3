#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	long long a[n];
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if((sum*2)%n!=0){
		cout<<0<<'\n';
		return;
	}
	long long k=sum*2/n;
	sort(a,a+n);
//	int l=lower_bound(a,a+n,k/2)-a;
//	int r=upper_bound(a,a+n,k)-a;
//	int l=lower_bound(a,a+n,k-a[r-1])-a;
	long long count=0;
	for(int i=0;i<n;i++){
		if(a[i]*2<k){
			auto r=equal_range(a,a+n,k-a[i]);
			count+=(long long)(r.second-r.first);
		}
		if(a[i]*2==k){
			auto r=equal_range(a,a+n,k-a[i]);
			long long t=(long long)(r.second-r.first);
			count+=(t*(t-1))/2;
			break;
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

