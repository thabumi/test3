#include <bits/stdc++.h>

using namespace std;


void run_case(){
	int n;
	cin>>n;
	bool b=true;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
			if(a[i]>a[i+1]){
				b=false;
				break;
			}
		}
	int turn=1;
	while(!b){
		if(turn%2==0){
			for(int i=2;i<=n-1;i+=2){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
				}
			}
		}
		else{
			for(int i=1;i<=n-2;i+=2){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
				}
			}
		}
		turn++;
		for(int i=1;i<=n-1;i++){
			if(a[i]>a[i+1]){
				b=false;
				break;
			}
			b=true;
		}
	}
	cout<<turn-1<<'\n';
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
