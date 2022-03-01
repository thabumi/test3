#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int k;
	cin>>k;
	int i=k;
	while(i-(i/3+(i+7)/10-(i+27)/30)<k){
		i++;
	}
	cout<<i<<'\n';
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
