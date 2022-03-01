#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int A,B,C;
	long long X,Y,Z;
	cin>>A>>B>>C>>X>>Y>>Z;
	long long res=0;
	for(int i=0;i<=20;i++){
		for(int j=0;j<=20;j++){
			for(int k=0;k<=20;k++){
				if(A*i+B*j+C*k<=240){
					res=max(res,X*i+Y*j+Z*k);
				}
			}
		}
	}
	cout<<res<<'\n';
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

