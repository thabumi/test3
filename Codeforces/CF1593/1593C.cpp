#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,k;
	cin>>n>>k;
	int a[k];
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	sort(a,a+k);
	int j=k-1;
	int Cat=0;
	int count=0;
	while(a[j]>Cat&&j>=0){
		count++;
		Cat+=(n-a[j]);
		j--;
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

