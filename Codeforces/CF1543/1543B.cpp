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
	long long result;
	result=(sum%n)*(n-(sum%n));
	cout<<result<<'\n';
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
