#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int MIN;
	int A[n+1];
	int B[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		A[(a[i]+1)/2]=i;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		B[b[i]/2]=i;
	}
	for(int i=2;i<=n;i++){
		if(A[i]>A[i-1]){
			A[i]=A[i-1];
		}
	}
//	return;
	MIN=B[1]+A[1];
	for(int i=1;i<=n;i++){
		if(MIN>B[i]+A[i]){
			MIN=B[i]+A[i];
		}
	}
	cout<<MIN<<'\n';
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

