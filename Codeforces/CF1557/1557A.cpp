#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	double sum=0;
	double max=a[0];
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(max<a[i]){
			max=a[i];
		}
	}
	double result;
	result=(sum-max)/(n-1)+max;
	cout<<setprecision(10)<<result<<'\n';
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
