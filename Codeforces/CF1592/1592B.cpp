#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	vector<int> Max(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		Max[i]=max(n-1-i,i);
	}
	vector<int> b(a);
	sort(b.begin(),b.end());
	bool OK=true;
	
	for(int i=0;i<n;i++){
		if(x<=Max[i]){
			continue;
		}
		else{
			if(a[i]!=b[i]){
				OK=false;
				break;
			}
		}
	}
	if(OK){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
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

