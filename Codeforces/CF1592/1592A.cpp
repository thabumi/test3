#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,H;
	cin>>n>>H;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int D=a[n-1]+a[n-2];
	if(H%D>a[n-1]){
		cout<<2*(H/D)+2<<'\n';
	}
	else if(H%D==0){
		cout<<2*(H/D)<<'\n';
	}
	else{
		cout<<2*(H/D)+1<<'\n';
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

